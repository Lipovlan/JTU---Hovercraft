#include <Servo.h> //include the servo library for easier servo control

Servo myservo;  // create servo object to control a servo
//oranzova pwm na 6 pin
int pin_up = 5; // connect the updraft motor to the pin 5
int pin_fwd = 6; // connect the forward motor to the pin 6
int angle = 0; // variable that states the angle of the servo
int motor_up = 70; // variable that states the pwm of the updraft motor
int motor_fwd = 80; // variable that states the pwm of the forward motor
int potpin = 4; //connects the servo to analog pin 4
int potangle = 0; //variable that states the init pot-angle of servo

void setup() {        //setup cycle
  myservo.attach(3);  // attaches the servo on pin 3 to the servo object
}
//end of setup cycle


void loop() {   //main loop
potangle = analogRead(potpin);     // gives the value from pot to variable potangle
angle = map(potangle, 0, 675, 20, 145);   //maps the value from pot (3,3V) to the working angle of servo
myservo.write(angle);         // sets the angle of the servo
analogWrite(pin_up, motor_up);       // PWM of the upward motor
analogWrite(pin_fwd, motor_fwd);  // PWM of the forward motor
delay (15);    //gives the servo some time to actually get to the desired position
}
//end of main loop

  


