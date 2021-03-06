
// Motor B
#define right_backward 3
#define right_forward 2
#define right_speed 1

// Motor A
#define left_backward 4
#define left_forward 5
#define left_speed 6

#define SPEED 50
#define turn_speed 30


void setup() {
  Serial.begin(9600);  
}

void loop() {
  GoForward();
  delay(2000);
  Stop();
  GoRight();
  GoForward();
  delay(2000);
  Stop();
  GoLeft();
}



void Stop(){
  digitalWrite(right_backward,LOW);
  digitalWrite(left_backward,LOW);
  digitalWrite(right_forward,LOW);
  digitalWrite(left_forward,LOW);
  delay(3000);
}

void GoForward(){
  digitalWrite(right_backward,LOW);
  digitalWrite(left_backward,LOW);
  analogWrite(right_speed,SPEED);
  analogWrite(left_speed,SPEED/4);
  digitalWrite(right_forward,HIGH);
  digitalWrite(left_forward,HIGH);
}
void GoBackward(){
  digitalWrite(right_forward,LOW);
  digitalWrite(left_forward,LOW);
  analogWrite(right_speed,SPEED);
  analogWrite(left_speed,SPEED);
  digitalWrite(right_backward,HIGH);
  digitalWrite(left_backward,HIGH);
}
void GoRight(){
  digitalWrite(right_forward,LOW);
  digitalWrite(right_backward,LOW);
  //analogWrite(right_speed,SPEED);
  analogWrite(left_speed, turn_speed);
  digitalWrite(left_forward,HIGH);
  digitalWrite(left_backward,LOW);
  delay(700);
}
void GoLeft(){
  digitalWrite(left_backward,LOW);
  digitalWrite(left_forward,LOW);
  analogWrite(right_speed,turn_speed);
  //analogWrite(left_speed,SPEED);
  digitalWrite(right_backward,LOW);
  digitalWrite(right_forward,HIGH);
  delay(700);
}
