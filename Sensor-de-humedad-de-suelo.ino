/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB https://www.proyecto-teos.com/
*/

const uint8_t soilPinT = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  char toCharSoilT[3], resultSerialT[15];
  uint8_t valueSoilT;

  valueSoilT = map(analogRead(soilPinT), 200, 1023, 100, 0);
  valueSoilT = constrain (valueSoilT, 0, 100);

  dtostrf(valueSoilT, 3, 0, toCharSoilT);

  strcpy(resultSerialT, toCharSoilT);
  strcat(resultSerialT, "% de humedad");

  Serial.println(resultSerialT);

  delay(1000);
}
