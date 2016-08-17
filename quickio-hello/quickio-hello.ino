const int b1 = A0;
const int b2 = A1;
const int b3 = A2;
const int b4 = A3;

const int pot1 = A4;
const int pot2 = A5;

const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);

  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
  pinMode(b4, INPUT_PULLUP);

  digitalWrite(b3, HIGH);
  digitalWrite(b4, HIGH);


  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);


}

void loop() {
  digitalWrite(b3, HIGH);
  digitalWrite(b4, HIGH);
  int b1val = digitalRead(b1);
  int b2val = digitalRead(b2);
  int b3val = digitalRead(b3);
  int b4val = digitalRead(b4);
  int a4val = analogRead(A4);
  int a5val = analogRead(A5);

  Serial.printf("PIN_LED1: %d", PIN_LED1);
  Serial.printf("b1: %d, b2: %d, b3 %d, b4 %d\n", b1val, b2val, b3val, b4val);
  Serial.printf("A0: %d, A1: %d, A2 %d, A3 %d, A4 %d, A5 %d\n", a0val, a1val, a2val, a3val, a4val, a5val);
  Serial.printf("A0: %d, A1: %d, A2 %d, A3 %dA4 %d, A5 %d\n", A0, A1, A2, A3, A4, A5);

  delay(250);
}

