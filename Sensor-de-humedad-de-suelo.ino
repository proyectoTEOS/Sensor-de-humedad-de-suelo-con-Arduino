/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB http://bit.ly/1UvumG9
*/

const int sensorPinT = A0;

int valT;
int finalvalT;

void setup() {
  Serial.begin(9600);
}
void loop() {
  valT = map(analogRead(sensorPinT), 0, 1023, 100, 0);
  finalvalT = constrain (valT, 0, 100);
  Serial.print("Hay un ");
  Serial.println(finalvalT);
  Serial.println("% de humedad");
  if ((finalvalT >= 0) and (finalvalT <= 33)) {
    Serial.println("Suelo seco");
  } else if ((finalvalT >= 34) and (finalvalT <= 66)) {
    Serial.println("Suelo humedo");
  } else {
    Serial.println("Suelo mojado");
  }
  delay(1000);
}
