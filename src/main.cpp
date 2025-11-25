#include "main.h"

// put function declarations here:
C_WashingMachine Washing1;

void setup() {
    Serial.begin(115200);
    Serial.println("WashingMachine főkód elindult");  
}

void loop() {
   Washing1.door_lock(1);
}
