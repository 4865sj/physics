void setup() {
pinMode(3, OUTPUT);
pinMode(4, INPUT);
pinMode(5, OUTPUT);
pinMode(6, INPUT);
pinMode(7, OUTPUT);
pinMode(8, INPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
digitalWrite(3, HIGH);
int input0 = digitalRead(4);
digitalWrite(5, HIGH);
int input1 = digitalRead(6);
digitalWrite(7, HIGH);
int input2 = digitalRead(8);

int carry = (input0 * input1 + input0 * input2 + input1 * input2) % 2;
int sum = (input0 + input1 + input2) % 2;

digitalWrite(9, carry);
digitalWrite(10, sum);


}
