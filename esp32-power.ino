#include "EmonLib.h"

EnergyMonitor emon;

void setup() {
  Serial.begin(115200);

  /* analogReadResolution(12); */
  emon.current(A0, 111.1);
}

void loop() {
  double irms = emon.calcIrms(1480);
  /* Serial.print(irms * 230.0); */
  /* Serial.print("\t"); */
  Serial.println(irms);
  /* double reading = analogRead(A0); */
  /* Serial.println(reading); */
  /* delay(10); */
}
