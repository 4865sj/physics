void setup() {
pinMode(3, OUTPUT);
pinMode(7, OUTPUT);
}

void loop() {
digitalWrite(3, HIGH);
int state = digitalRead(4);
if (state == HIGH) {
  digitalWrite(7, LOW);
}
else {
  digitalWrite(7, HIGH);
}
}
