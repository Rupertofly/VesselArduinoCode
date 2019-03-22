#include <Arduino.h>
#include <LEDController.h>

void setup() {
    // put your setup code here, to run once:
    LEDController cont = LEDController(2,5);
    uint8_t x[] = {0,1,1,0,0};
    cont.update(x);

}

void loop() {
    // put your main code here, to run repeatedly:
}