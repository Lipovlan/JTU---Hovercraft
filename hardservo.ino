#include <Servo.h> // include the Servo library

Servo myservo;  // create servo object to control a servo

int angle = 20;    // variable that states the angle of the servo

void setup() {  //setup cycle
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {  //main loop
for (angle = angle; angle >= 20; angle =- 5){
  myservo.write(angle);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
  }
for (angle = angle; angle <= 160; angle =+5){
  myservo.write(angle);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
    }
 }

  


