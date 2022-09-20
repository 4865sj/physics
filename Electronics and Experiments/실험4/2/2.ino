void setup() {
pinMode(3, OUTPUT);
pinMode(4, INPUT);
pinMode(5, OUTPUT);
pinMode(6, INPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
}

void loop() {
digitalWrite(3, HIGH);
int input_A = digitalRead(4);
digitalWrite(5, HIGH);
int input_B = digitalRead(6);

if (input_A == HIGH) {
  digitalWrite(7, HIGH);
}
else {
  digitalWrite(7, LOW);
};

if (input_B == HIGH) {
  digitalWrite(8, HIGH);
}
else {
  digitalWrite(8, LOW);
};

}
