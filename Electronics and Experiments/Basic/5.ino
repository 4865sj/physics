void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3, HIGH);
int state = digitalRead(4);
Serial.print(state);
}
