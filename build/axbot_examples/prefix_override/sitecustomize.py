import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/media/roboserver/DATA/axbot_ws/install/axbot_examples'
