/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */


#include <IRremote.h>

IRsend irsend;

void setup()
{
  Serial.begin(9600);
  pinMode(4,INPUT);
}

void loop() {
  if(digitalRead(4)==HIGH){
    Serial.println("PULSE GENERATED");
    for (int i = 0; i < 3; i++) {
      irsend.sendSony(0xa90, 12);
      delay(40);
    }
  }else{
      Serial.println("x");
    }

	
//	delay(2000); //5 second delay between each signal burst
}
