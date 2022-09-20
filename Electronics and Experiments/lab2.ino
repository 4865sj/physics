void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(12, INPUT);
pinMode(13, OUTPUT);
}

void loop() {
int decode[8][8] = {{1,1,1,1,1,1,0}, {0,1,1,0,0,0,0}, {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1}, {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1}, {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0,0}};

digitalWrite(13, HIGH);
int s = digitalWrite(12);
while (s == 1) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      digitalWrite(j+2, decode[i][j]);
    }
    if (int digitalWrite(12) == 0) {
      break;
    } else {
      continue;
    };
    delay(2000);
  }
};
for (int i = 0; i < 8; i++) {
  digitalWrite(i+2, decode[0][i]);
};
}
