int D09 = 9;
int D08 = 8;
int D07 = 7;
int D06 = 6;
int motor1enable = A0;
int motor1forward = D2;
int motor1backward = D3;

int motor2enable = A1;
int motor2forward = D4;
int motor2backward = D5;


void setup() {
  // put your setup code here, to run once:

  pinMode(D09, OUTPUT);
  pinMode(D08, OUTPUT);
  pinMode(D07, OUTPUT);
  pinMode(D06, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A2, OUTPUT);

  pinMode(motor1enable, OUTPUT);
  pinMode(motor1forward, OUTPUT);
  pinMode(motor1backward, OUTPUT);
  pinMode(motor2enable, OUTPUT);
  pinMode(motor2forward, OUTPUT);
  pinMode(motor2backward, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D09, HIGH);
  digitalWrite(D08, HIGH);
  digitalWrite(D07, HIGH);
  digitalWrite(D06, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A2, HIGH);

  digitalWrite(motor1enable, HIGH);
  digitalWrite(motor1forward, HIGH);
  digitalWrite(motor1backward, LOW);

  digitalWrite(motor2enable, HIGH);
  digitalWrite(motor2forward, HIGH);
  digitalWrite(motor2backward, LOW);



}
