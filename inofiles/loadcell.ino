#include "HX711.h"
#define calibration_factor -7050.0
#define DOUT 3
#define CLK 2

HX711 scale(DOUT, CLK);

void setup(){
  Serial.begin(9600);
  Serial.println("HX711 scale TEST");
  scale.set_scale(calibration_factor);
  scale.tare();
  Serial.println("Readings:");  
}

void loop(){
  Serial.print("Reading: ");
  Serial.print(scale.get_units(), 1);
  Serial.print(" lbs");
  Serial.println();  
}