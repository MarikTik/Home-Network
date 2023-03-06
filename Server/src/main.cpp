#include <Arduino.h>
#include "Application.h"
 
void setup() {
   Application::start();
}

void loop() {
   Application::run();
}