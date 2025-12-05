import requests
import logging
from typing import Dict, Optional


class AxBotRestClient:
    """REST API client for AxBot robot."""
    
    def __init__(self, robot_ip: str, robot_port: int = 8090, secret: str = ""):
        self.base_url = f"http://{robot_ip}:{robot_port}"
        self.secret = secret
        self.logger = logging.getLogger('AxBotRestClient')
        
        self.session = requests.Session()
        if self.secret:
            self.session.headers.update({"Secret": self.secret})
        
        self.logger.info(f"REST client initialized for {self.base_url}")
    
    def _make_request(self, method: str, endpoint: str, data: Optional[Dict] = None, 
                     timeout: float = 5.0) -> Optional[Dict]:
        """Make HTTP request to robot."""
        url = f"{self.base_url}{endpoint}"
        
        try:
            if method == "GET":
                response = self.session.get(url, timeout=timeout)
            elif method == "POST":
                response = self.session.post(url, json=data, 
                                            headers={"Content-Type": "application/json"},
                                            timeout=timeout)
            elif method == "DELETE":
                response = self.session.delete(url, timeout=timeout)
            else:
                self.logger.error(f"Unsupported HTTP method: {method}")
                return None
            
            if response.status_code in [200, 201, 204]:
                if response.text:
                    try:
                        return response.json()
                    except:
                        return {"raw": response.text}
                return {}
            else:
                self.logger.error(f"Request failed: {method} {endpoint} - Status {response.status_code}")
                return None
                
        except requests.exceptions.Timeout:
            self.logger.error(f"Request timeout: {method} {endpoint}")
            return None
        except requests.exceptions.ConnectionError:
            self.logger.error(f"Connection error: {method} {endpoint}")
            return None
        except Exception as e:
            self.logger.error(f"Request error: {e}")
            return None
    
    def get_device_info(self) -> Optional[Dict]:
        """Get device information."""
        return self._make_request("GET", "/device/info")
    
    def set_control_mode(self, mode: str) -> bool:
        """Set wheel control mode."""
        result = self._make_request("POST", "/services/wheel_control/set_control_mode",
                                    data={"control_mode": mode})
        return result is not None
    
    def set_emergency_stop(self, enable: bool) -> bool:
        """Enable or disable emergency stop."""
        result = self._make_request("POST", "/services/wheel_control/set_emergency_stop",
                                    data={"enable": enable})
        return result is not None
    
    def close(self):
        """Close the REST client session."""
        self.session.close()
        self.logger.info("REST client closed")
