
#include "wifi_tools.h"
WiFi_Tools wifi_tools;

WiFi_Tools::WiFi_Tools() {}


void WiFi_Tools::begin(const char * ssid, const char * pass) {
	WiFi.setAutoReconnect(false);
	WiFi.onEvent(_event_handler);	
	WiFi.begin(ssid, pass);
}




void WiFi_Tools::log_events() {
	_event_logging_enabled = true;
}



void WiFi_Tools::_event_handler(WiFiEvent_t event, WiFiEventInfo_t info) {

	if (wifi_tools._event_logging_enabled) wifi_tools._log_event(event, info);

	if (event == ARDUINO_EVENT_WIFI_STA_DISCONNECTED) {
		if (wifi_tools.is_connected) Serial.println("\n\tdisconnected...\n");
		wifi_tools.is_connected = false;

		bool _manually_disconnected = info.wifi_sta_disconnected.reason == WIFI_REASON_ASSOC_LEAVE;
		
		if (!_manually_disconnected && !wifi_tools._is_first_disconnect) {
			// wifi_tools._reconnect();
			WiFi.reconnect();  // CHANGED AFTER VIDEO PUBLICATION.  SEE THE README.md
		}

		wifi_tools._is_first_disconnect = false;
	}


	if (event == ARDUINO_EVENT_WIFI_STA_GOT_IP) {
		if (!wifi_tools.is_connected) Serial.println("\n\tconnected...\n");
		wifi_tools.is_connected = true;
	}
			
}


void WiFi_Tools::_reconnect() {
	if (millis() - _reconnect_timer > RECONNECT_INTERVAL) {
		Serial.println("\tcalling for reconnection...");
		WiFi.reconnect();
		_reconnect_timer = millis();
	}
}
