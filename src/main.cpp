#include <Arduino.h>
#include <hagl_hal.h>
#include <hagl.h>


void setup(){
    hagl_init();
}

void loop(){
    hagl_clear_screen();
    // some drawing stuff
    hagl_flush();
    delay(500);
}