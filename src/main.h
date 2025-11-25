#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>

void washingmachine_setup();
void washingmachine_loop();

class C_WashingMachine {
    private: 
        
    public:
        C_WashingMachine();
        void program_change(uint8_t program_nr); // 0 - off, 1
        void water_heater(uint8_t temperature, bool on);
        void door_lock(uint8_t switch_type); // 0 - timer open, 1 - open immediately, 2- close
        void water_pump();
        void dosage_fun(uint8_t chemical_type); // 0 - pump stop, 1 - pump on
        void sewage_pump();
        void motor_start(uint8_t running_mode); // 0 - stop, 1 - rotation right, 2 - rotation left
        void motor_rotation(uint8_t time_table); // 0 - stop, 1 - 1s on, 1s off, 2 - 5s on, 5s off
};



#endif