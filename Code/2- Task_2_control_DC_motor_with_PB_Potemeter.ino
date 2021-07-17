// DC Motor Control parameters
int EN1 = 3; //Motor 1 Enable (Left Motor) for controlling the speed pf the motor using PWM [PWM pins (3, 5, 6, 9, 10, or 11]
int EN2 = 5; //Motor 2 Enable (Right Motor)
int IN1 = 4; // Motor 1 outputs for directions control 
int IN2 = 2; 
int IN3 = 6; // Moto 2 outputs for directions control 
int IN4 = 7; 

// Speed & Directional control parametrs
int PWMcontrol=0; // define variable for speed control
#define PB A0 // define push button pin for directional control (#define: just used for one time only)
bool pressedstate = false; //state of PB
int MotorDir=0; //motor direction variable

void setup() {
//Left motor
pinMode(EN1 , OUTPUT) ; 
pinMode(IN1 , OUTPUT) ;
pinMode(IN2 , OUTPUT) ;
//Right motor 
pinMode(EN2 , OUTPUT) ; 
pinMode(IN3 , OUTPUT) ;
pinMode(IN4 , OUTPUT) ;



pinMode(PB  ,INPUT); //set PB as input
Serial.begin(9600);
}

void loop() {
  int PotmeterVal=analogRead(A1); //read the value of potenmeter which is from 0-1023
  PWMcontrol = map(PotmeterVal, 0, 1023, 0 , 255); // Map the potentiometer value from 0-1023 (Volt) to 0-255 (PWM)
  PWMcontrol=constrain(PWMcontrol,0,255);
  analogWrite(EN1, PWMcontrol); // Send PWM signal which is from 0-255 to the L293D Enable pin
  analogWrite(EN2, PWMcontrol);
  Serial.print(PotmeterVal); //print analog read of Potmeter
  Serial.print("\t");
  Serial.println(PWMcontrol); //prinhg PWM value when canging the Potmeter
  
  
  if (digitalRead(PB) == true) {
    pressedstate = !pressedstate; // change state of pressed to true
  }
  while (digitalRead(PB) == true); //keep PB state to true, latch thr PB
  delay(20);
  
  // If button is pressed - change rotation direction to CW
  if (pressedstate == true  & MotorDir == 0) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    MotorDir = 1; 
    delay(20);
  }
  // If button is pressed - change rotation direction to CCW
  if (pressedstate == false & MotorDir == 1) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    MotorDir = 0; 
    delay(20);
  }
}
 

