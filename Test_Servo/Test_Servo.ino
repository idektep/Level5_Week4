#include <Servo.h>

Servo myservoA;  
Servo myservoB; 

void setup() {
  myservoA.attach(5);
  myservoB.attach(6);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservoA.write(0);                  // sets the servo position according to the scaled value
  myservoB.write(0);  
  delay(5000);                           // waits for the servo to get there
  myservoA.write(30);                  // sets the servo position according to the scaled value
  myservoB.write(30);  
  delay(1000);    
  //myservoA.write(180);                  // sets the servo position according to the scaled value
  //myservoB.write(180);  
  //delay(5000);
  
}
