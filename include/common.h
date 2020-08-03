#include <NeoPixelBus.h>
#include <SimpleTimer.h>

#include "config.h"

enum Effect
{
    eOff,
    eStable,
    eSunrise,
    eColorLoop
};

enum PartialLitMode
{
    eSides,
    eMiddle,
    eNear,
    eFar,
    eEven
};

extern SimpleTimer timer;
extern NeoPixelBus<NeoGrbwFeature, Neo800KbpsMethod> strip;
extern RgbwColor stripLeds[NUM_LEDS];
extern Effect effect;

void sunRise();
void startSunrise(int duration);
void startEffect();
void stopEffect();
void lightLeds();
