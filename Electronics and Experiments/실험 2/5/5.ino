void setup() {
pinMode(3, OUTPUT);
pinMode(7, OUTPUT);
}

void loop() {
digitalWrite(3, HIGH);
int state1 = digitalRead(4);
int state2 = digitalRead(6);

if (state1 == LOW & state2 == LOW) {
  digitalWrite(7, HIGH);
}
else {
  digitalWrite(7, LOW);
}
}
