# WiFi: Reconnect <img src="https://www.ohioiot.com/images/logo.jpg" width=40px >


## Overview
This code serves is an output from the YouTube video [ESP32 WiFi - Reconnect The Right Way](https://youtu.be/Ie_zWN5bujE), part of a video series marching toward your next-level WiFi library for ESP32 IoT developers.  👉 Subscribe to the [OhioIoT YouTube Channel](https://www.youtube.com/@OhioIoT?sub_confirmation=1) for more on All Things IoT: hardware, firmware, connectivity, cloud computing, and dev toolkit.



## Getting Started
```
git clone https://github.com/OhioIoT-Examples/ESP32_WiFi_Reconnect.git
```


### Getting Started - PlatformIO
- Set your wifi credentials in ***src/main.cpp***
- Compile and run


### Getting Started - Arduino IDE 
- Open ***wifi_lab.ino*** in the ***wifi_lab/*** folder.  That sketch directly links all three files in the ***lib/wifi_tools*** directory. 
- Add your wifi credentials in ***wifi_lab.ino***.
- When you are satisfied that it works:
  - copy the ***wifi_tools*** folder to your Arduino shared ***libraries/*** folder
  - change your include in ***wifi_lab.ino*** to be `#include "wifi_tools.h"`

## Updates
- 09-15-2025: Re-inserted `WiFi.reconnect()` as the reconnect function in the event handler.  `wifi_tools.reconnect()` is only calling `WiFi.reconnect()` after the timer exceeds he threshold.  This works if we are constantly polling this function in the loop whenever `!wifi_tools.is_connected`. Events happen when they happen.  If your disconnected event happens before the timer is exceeded - no reconnect. 

<br>


*OhioIoT is an IoT platform designed for small-scale IoT projects (https://www.ohioiot.com).*
