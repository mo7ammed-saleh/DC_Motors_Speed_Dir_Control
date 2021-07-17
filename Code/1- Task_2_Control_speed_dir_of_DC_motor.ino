// DC Motor Control 
int EN1 = 3; //Motor 1 Enable (Left Motor) for controlling the speed pf the motor using PWM [PWM pins (3, 5, 6, 9, 10, or 11]
int EN2 = 5; //Motor 2 Enable (Right Motor)

int IN1 = 2; // Motor 1 outputs for directions control 
int IN2 = 3; 
int IN3 = 6; // Moto 2 outputs for directions control 
int IN4 = 7; 



void setup() {
//Left motor
pinMode(EN1 , OUTPUT) ; 
pinMode(IN1 , OUTPUT) ;
pinMode(IN2 , OUTPUT) ;
//Right motor 
pinMode(EN2 , OUTPUT) ; 
pinMode(IN3 , OUTPUT) ;
pinMode(IN4 , OUTPUT) ;
}

void loop() {
  digitalWrite(IN1 , HIGH); 
  digitalWrite(IN2 , LOW);
  digitalWrite(EN1, HIGH);
  delayMicroseconds(100); // Approximately 10% duty cycle @ 1KHz
  digitalWrite(EN1, LOW);

  digitalWrite(IN3 , HIGH); 
  digitalWrite(IN4 , LOW);
  digitalWrite(EN2, HIGH);
  delayMicroseconds(100); // Approximately 10% duty cycle @ 1KHz
  digitalWrite(EN2, LOW);
 
}


