# WiFi: Reconnect <img src="https://www.ohioiot.com/images/logo.jpg" width=40px >


## Overview

This code serves as an interim stop in a series of videos marching toward your next-level WiFi library for ESP32 IoT developers.  

"Nail Down Your WiFi":
- **[ESP32 WiFi - Introduction To Events](https://www.youtube.com/watch?v=AT4uNl0lJK8)**
- **[ESP32 WiFi - Clocking Your Functions]([tbd])**
- **[ESP32 WiFi - Get Reconnected]([tbd])** <---- the video that explains this code


## Getting Started
```
git clone https://github.com/OhioIoT-Examples/ESP32_WiFi_Reconnect.git
```


### Getting Started - PlatformIO
- Set your wifi credentials in ***src/main.cpp***
- Compile and run


### Getting Started - Arduino IDE 
- Open ***reconnect.ino*** in the ***reconnect/*** folder.  That sketch directly links both files in the ***lib/wifi_tools*** directory. 
- Add your wifi credentials in ***reconnect.ino***.
- When you are satisfied that it works:
  - copy the ***wifi_tools*** folder to your Arduino shared ***libraries/*** folder
  - change your include to be `#include "wifi_tools.h"`


<br>


*OhioIoT is an IoT platform designed for small-scale IoT projects (https://www.ohioiot.com).*
