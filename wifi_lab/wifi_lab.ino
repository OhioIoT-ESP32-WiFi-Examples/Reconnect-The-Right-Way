
// #include "wifi_tools.h"      // use this when wifi_tools is in libraries/
#include "../lib/wifi_tools/wifi_tools.h"           // delete when wifi_tools is in libraries/
#include "../lib/wifi_tools/wifi_tools.cpp"         // delete when wifi_tools is in libraries/
#include "../lib/wifi_tools/wifi_tools_debug.cpp"   // delete when wifi_tools is in libraries/
 
const char * ssid = "[your SSID]";
const char * pass = "[your WiFi Password]";

void setup() {
	Serial.begin(115200);
	Serial.println("\n\tawake...\n");

	wifi_tools.log_events();
	wifi_tools.begin(ssid, pass);
}

void loop() {
	if (wifi_tools.is_connected) {
		// run the code that depends on the network
	} 
	wifi_tools.log_status();
}