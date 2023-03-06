#include "Server.h"
#include <LittleFS.h>



void serveStaticFiles(){
   
   auto serve = [](const char* uri, const char* path){
      server_components::server.serveStatic(uri, LittleFS, path);
   };

   
   
}

void addRouts(){

}

void addWebEvents(){

}

void addWebSockets(){

}

void bserver::begin(){

   serveStaticFiles();
   addRouts();
   addWebEvents();
   addWebSockets();

   server_components::server.begin();
}

void bserver::run(){
   
}