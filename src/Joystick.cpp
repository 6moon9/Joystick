#include <Arduino.h>

#include "Joystick.h"

/**
 * Setup the joystick
 */
Joystick::Joystick(uint8_t xPin, uint8_t yPin, uint8_t cPin, bool xReversed = false, bool yReversed = false)
{
    x = Potentiometer(xPin, xReversed);
    y = Potentiometer(yPin, yReversed);
    clck = Button(cPin);
}
