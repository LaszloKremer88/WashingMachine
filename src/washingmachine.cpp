#include "main.h"

C_WashingMachine WashingMachine;

void washingmachine_setup() {
    
}

void washingmachine_loop() {
    
}

C_WashingMachine::C_WashingMachine() {
    Serial.println("A WashingMachine objektum létrejött");        
}

void C_WashingMachine::door_lock(uint8_t switch_id) {
    Serial.println("Ajtózár funkció");  
}

void C_WashingMachine::program_change(uint8_t program_nr) {
    Serial.println("Programváltás funkció");  
}
void C_WashingMachine::water_heater(uint8_t temperature, bool on) {
    Serial.println("Fűtőszál funkció");  
}
void C_WashingMachine::water_pump() {
    Serial.println("Szivattú funkció");  
}
void C_WashingMachine::dosage_fun(uint8_t chemical_type) {

} // 0 - pump stop, 1 - pump on
void C_WashingMachine::sewage_pump() {

}
void C_WashingMachine::motor_start(uint8_t running_mode) {

} // 0 - stop, 1 - rotation right, 2 - rotation left
void C_WashingMachine::motor_rotation(uint8_t time_table) {

} // 0 - stop, 1 - 1s on, 1s off, 2 - 5s on, 5s off