
#include "HX711.h"
#include "pin.h";

void setup()
{
  Serial.begin(9600);
  weightInit();
  buzzLedInIt();
  launchMode();
}

void loop()
{
  int rawWeit = getWeight();
  Serial.println(rawWeit);  
}
