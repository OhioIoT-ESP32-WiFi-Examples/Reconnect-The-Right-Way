
#ifndef WIFI_TOOLS_h
#define WIFI_TOOLS_h

#include <WiFi.h>

#define STATUS_LOG_INTERVAL 1000
#define RECONNECT_INTERVAL 10000

class WiFi_Tools {

    public:

        WiFi_Tools();

        void begin(const char *, const char *);
        void log_events();
        void log_status();

        bool is_connected = false;

    private:

        bool _event_logging_enabled = false;
        bool _is_first_disconnect = true;

        unsigned long _status_timer;
        unsigned long _reconnect_timer;

        void _reconnect();

        static void _event_handler(WiFiEvent_t, WiFiEventInfo_t);
        void _log_event(WiFiEvent_t, WiFiEventInfo_t);

};

extern WiFi_Tools wifi_tools;


#endif