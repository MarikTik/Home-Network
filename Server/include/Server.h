#ifndef SERVER_H_
#define SERVER_H_

#include <Update.h>
#include <WiFi.h>
#include <AsyncTCP.h>
#include <AsyncEventSource.h>
#include <AsyncWebSocket.h>
#include <ESPAsyncWebServer.h>

namespace server
{
   void begin();
   void run();
}

namespace server_components
{
   inline AsyncWebServer server(SERVER_PORT); 
}

#endif