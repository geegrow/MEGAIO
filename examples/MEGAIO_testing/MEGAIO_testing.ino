#include "MEGAIO.h"


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial);
  uint8_t res;

//  pinMode(4, OUTPUT);
//  digitalWrite(4, HIGH);
//  MEGAIO::pinMode(MEGAIO::PK_7, INPUT);
//  res = MEGAIO::digitalRead(MEGAIO::PK_7);

  MEGAIO::pinMode(MEGAIO::PK_7, OUTPUT);
  MEGAIO::digitalWrite(MEGAIO::PK_7, LOW);
  pinMode(4, INPUT);
  res = digitalRead(4);

  Serial.println(res);
}

void loop() {
  // put your main code here, to run repeatedly:

}
