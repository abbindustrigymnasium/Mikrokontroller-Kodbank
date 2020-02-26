#include <Servo.h>
Servo servo;

void setup() {
 // servo.attach(14); //Orange 14/D5 
   // RÖD 3.3 volt
  //Brun Ground
  Serial.begin(115200);
  servo.write(0);
  // put your setup code here, to run once:

}

void loop() {
/*servo.write(90);
delay(1000);
servo.write(0);
delay(1000);
servo.write(180);
delay(1000);
Serial.print("Vrid");
*/

//När stannar vridningen?
/*
int vridning= 0;
while (vridning<=360)
{
  servo.write(vridning);
delay(500);
  Serial.print("Vridning "+String( vridning));
  vridning=vridning+20;
}*/

int vridning= 45;
servo.write(0);
delay(1500);
servo.write(45);
delay(1500);
servo.write(90);
delay(1500);
servo.write(135);
delay(1500);

servo.write(180);
delay(1500);
}
