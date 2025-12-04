import asyncio
import json
import websockets
from typing import Callable, Dict, List, Optional
import logging


class AxBotWebSocketClient:
    """WebSocket client for AxBot robot."""
    
    def __init__(self, ws_url: str, topics_to_subscribe: List[str],
                 message_callback: Callable[[str, Dict], None],
                 reconnect_interval: float = 5.0):
        self.ws_url = ws_url
        self.topics_to_subscribe = topics_to_subscribe
        self.message_callback = message_callback
        self.reconnect_interval = reconnect_interval
        
        self.websocket: Optional[websockets.WebSocketClientProtocol] = None
        self.is_running = False
        self.is_connected = False
        self.enabled_topics: List[str] = []
        
        self.logger = logging.getLogger('AxBotWebSocketClient')
        
        self.waiting_for_twist_feedback = False
        self.twist_feedback_event = asyncio.Event()
    
    async def connect(self) -> bool:
        """Connect to the WebSocket server."""
        try:
            self.logger.info(f"Connecting to {self.ws_url}...")
            self.websocket = await websockets.connect(self.ws_url)
            self.is_connected = True
            self.logger.info("WebSocket connected successfully")
            
            for topic in self.topics_to_subscribe:
                await self.subscribe_topic(topic)
            
            return True
        except Exception as e:
            self.logger.error(f"Failed to connect: {e}")
            self.is_connected = False
            return False
    
    async def subscribe_topic(self, topic: str) -> bool:
        """Subscribe to a topic."""
        if not self.websocket:
            self.logger.warning("Not connected, cannot subscribe to topic")
            return False
        
        try:
            subscribe_msg = json.dumps({"enable_topic": topic})
            await self.websocket.send(subscribe_msg)
            self.logger.info(f"Subscribed to topic: {topic}")
            return True
        except Exception as e:
            self.logger.error(f"Failed to subscribe to {topic}: {e}")
            return False
    
    async def send_twist(self, linear_velocity: float, angular_velocity: float) -> bool:
        """Send velocity command to robot."""
        if not self.websocket or not self.is_connected:
            self.logger.warning("Not connected, cannot send twist command")
            return False
        
        if self.waiting_for_twist_feedback:
            self.logger.warning("Still waiting for previous twist feedback, skipping command")
            return False
        
        try:
            twist_msg = json.dumps({
                "topic": "/twist",
                "linear_velocity": linear_velocity,
                "angular_velocity": angular_velocity
            })
            
            await self.websocket.send(twist_msg)
            self.waiting_for_twist_feedback = True
            self.twist_feedback_event.clear()
            
            self.logger.debug(f"Sent twist: linear={linear_velocity:.3f}, angular={angular_velocity:.3f}")
            return True
        except Exception as e:
            self.logger.error(f"Failed to send twist command: {e}")
            self.waiting_for_twist_feedback = False
            return False
    
    async def receive_messages(self):
        """Continuously receive and process messages from WebSocket."""
        while self.is_running and self.websocket:
            try:
                message = await self.websocket.recv()
                data = json.loads(message)
                
                if "enabled_topics" in data:
                    self.enabled_topics = data["enabled_topics"]
                    self.logger.debug(f"Enabled topics: {self.enabled_topics}")
                    continue
                
                if "topic" in data:
                    topic = data["topic"]
                    
                    if topic == "/twist_feedback":
                        self.waiting_for_twist_feedback = False
                        self.twist_feedback_event.set()
                        self.logger.debug("Received twist feedback")
                    
                    self.message_callback(topic, data)
                
            except websockets.exceptions.ConnectionClosed:
                self.logger.warning("WebSocket connection closed")
                self.is_connected = False
                break
            except json.JSONDecodeError as e:
                self.logger.error(f"Failed to parse message: {e}")
            except Exception as e:
                self.logger.error(f"Error receiving message: {e}")
    
    async def run(self):
        """Main run loop with auto-reconnection."""
        self.is_running = True
        
        while self.is_running:
            if not self.is_connected:
                success = await self.connect()
                if not success:
                    self.logger.info(f"Reconnecting in {self.reconnect_interval} seconds...")
                    await asyncio.sleep(self.reconnect_interval)
                    continue
            
            try:
                await self.receive_messages()
            except Exception as e:
                self.logger.error(f"Error in receive loop: {e}")
            
            if self.is_running and not self.is_connected:
                self.logger.info(f"Reconnecting in {self.reconnect_interval} seconds...")
                await asyncio.sleep(self.reconnect_interval)
    
    async def stop(self):
        """Stop the WebSocket client and close connection."""
        self.is_running = False
        
        if self.websocket:
            try:
                await self.websocket.close()
            except Exception as e:
                self.logger.error(f"Error closing websocket: {e}")
            
            self.websocket = None
        
        self.is_connected = False
        self.logger.info("WebSocket client stopped")
