#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pin_up = 5; // connect the updraft motor to the pin 5
int pin_fwd = 6; // connect the forward motor to the pin 6
int angle = 0; // variable that states the angle of the servo
int motor_up = 150; // variable that states the pwm of the updraft motor
int motor_fwd = 100; // variable that states the pwm of the forward motor
int way = 0; //variable that states the current direction of servo

void setup() {        //setup cycle
  myservo.attach(3);  // attaches the servo on pin 3 to the servo object
}
//end of setup cycle


void loop() {     //main cycle
if (way == 1){    //if the direction is 1
  angle -= 1;     //substract one degree at a time from servo
  if (angle <= 20){ //if the degree of servo gets below 20
    way = 0;       //set the direction to the other way
  }
}
else {     //else (if the direction is 0
   angle += 1; //add one angle at the time to the servo
  if (angle >= 160){    //but if the angle gets above 160 degrees
    way = 1; // set the servo to the other way
  }  
}
myservo.write(140); // sets the angle of the servo
analogWrite(pin_up, motor_up);       // PWM of the upward motor
analogWrite(pin_fwd, motor_fwd);  // PWM of the forward motor
delay (15); // get the servo some time to get to the wanted position
 } 
//end main loop

  


