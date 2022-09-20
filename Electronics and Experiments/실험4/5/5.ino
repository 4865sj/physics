void setup() {
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
digitalWrite(3, HIGH);
int input0 = digitalRead(4);
digitalWrite(5, HIGH);
int input1 = digitalRead(6);

int carry = input0 * input1;
int sum = (input0 + input1) % 2;

digitalWrite(9, carry);
digitalWrite(10, sum);


}
