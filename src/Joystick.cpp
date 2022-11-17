#include <Arduino.h>

#include "Joystick.h"

/**
 * Setup the joystick
 */
Joystick::Joystick(uint8_t xPin, uint8_t yPin, uint8_t cPin)
{
    x = Potentiometer(xPin);
    y = Potentiometer(yPin);
    clck = Button(cPin);
}
