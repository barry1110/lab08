#include <Ultrasonic.h>
Ultrasonic ultrasonic(12, 13);
int distance;
const byte Button=6;

void int0(void) 
{   
  distance = ultrasonic.read();
  Serial.print("Distance in CM: ");
  Serial.println(distance);
} 

void setup() {
  Serial.begin(9600);
  attachInterrupt(Button, int0, RISING);
}

void loop() {
  delay(1000);
}
