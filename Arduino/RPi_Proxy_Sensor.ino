#include <SharpIR.h>
#include <TM1637Display.h>

#define IRPin A0
#define model 1080

SharpIR mySensor = SharpIR(IRPin, model);

int distance_cm;

void setup() {
  Serial.begin(9600);
}
void loop() {
  distance_cm = mySensor.distance();
  if(distance_cm > 0 && distance_cm < 80){
    digitalWrite(4, HIGH); //LED
    digitalWrite(3, HIGH); //to RPi
  }
  else{
    digitalWrite(4, LOW); //LED
    digitalWrite(3, LOW); //to RPi
  }

  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  delay(500);
}
