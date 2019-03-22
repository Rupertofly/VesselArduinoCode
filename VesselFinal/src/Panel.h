#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <LEDController.h>

#ifndef Panel_h
#define Panel_h

class Panel {
    public:
    
        Panel(LEDController &Controller, int _numLEDs);
        void update(uint8_t colour[]);
        void setMode(uint8_t _mode);
    private:
        Adafruit_NeoPixel strip;
        uint8_t pin;
        int panels;
        uint8_t colour[4];
        uint8_t mode;
        
};

#endif
