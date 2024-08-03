#pragma once

#include "Arduino.h"

class ThreeSFlightSimsI2C
{
public:
    ThreeSFlightSimsI2C(uint8_t addrI2C);
    void begin();
    void attach();
    void detach();
    void set(int16_t messageID, char *setPoint);
    void update();

private:
    bool    _initialised;
    uint8_t _addrI2C;
};