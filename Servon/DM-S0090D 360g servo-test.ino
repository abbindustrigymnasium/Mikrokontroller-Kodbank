#include <Servo.h>
Servo servo;
//Servon DM-S0090D

//70 minsta bak, 90 still, 115 minsta fram
//Desto mer över 115 desto snabbare motsatsen för under 70 för bakåt.
//Antal varv bestämmer man med delay.
void setup() {
  servo.attach(2); //Orange 2/D4 
   // RÖD 3.3 volt
  //Brun Ground
  Serial.begin(115200);
  servo.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:

/*
int vridning= 0;
while (vridning<=360)
{
  servo.write(vridning);
  
 Serial.println("Hastighet/Riktning"+ String(vridning));
  delay(500);
  vridning=vridning+20;
}
*/

 Serial.println("Snabbare Bakåt");
  servo.write(0);
delay(2500);

  Serial.println("Bakåt");
  servo.write(70);
delay(2500);

Serial.println("Still ");
  servo.write(90);
  delay(2500);

  servo.write(115);
  
  Serial.println("Framåt ");
  delay(2500);
   servo.write(180);
  
  Serial.println("Snabbare Framåt ");
  delay(2500);
  
}
