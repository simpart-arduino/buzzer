#include <Arduino.h>
#include "Buzzer.hpp"

Buzzer::Buzzer (int pin) {
    /* pin setting */
    pin_num = pin;
    pinMode(pin,OUTPUT);
}

void Buzzer::normalBuzzer (void) {
    unsigned char i;
    
    for(i=0; i<200 ;i++) {
        digitalWrite(pin_num,HIGH);
        delayMicroseconds(200);
        digitalWrite(pin_num,LOW);
        delayMicroseconds(200);
    }
};

void Buzzer::errorBuzzer (void) {
    int i;
    
    for(i=0; i<200 ;i++) {
        digitalWrite(pin_num,HIGH);
        delayMicroseconds(200);
        digitalWrite(pin_num,LOW);
        delayMicroseconds(200);
    }
    
    delay(100);

    for(i=0; i<1000 ;i++) {
        digitalWrite(pin_num,HIGH);
        delayMicroseconds(200);
        digitalWrite(pin_num,LOW);
        delayMicroseconds(200);
    }
};
