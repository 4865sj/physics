void setup() {
pinMode(3, OUTPUT);
pinMode(4, INPUT);
pinMode(5, OUTPUT);

}

void loop() {
digitalWrite(3, HIGH);
int input = digitalRead(4);
if (input == HIGH) {
  digitalWrite(5, HIGH);
}
else {
  digitalWrite(5, LOW);
};

}
