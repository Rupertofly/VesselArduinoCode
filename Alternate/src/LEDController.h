#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#ifndef LEDController_h
#define LEDController_h

class LEDController {
    public:
    
        LEDController(int _pin, int _panels);
        void update(uint8_t _settings[5]);
    private:
        Adafruit_NeoPixel strip;
        int pin;
        int panels;

};

#endif
