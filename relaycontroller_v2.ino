#define relay 13
#define indic 2

void setup() {
  pinMode(relay, OUTPUT);
  pinMode(indic, OUTPUT);
}

void cycle1() {
  // device online cycle
  for (int i = 0; i < 1800; i++) {
    digitalWrite(indic,HIGH);
    delay(500);
    digitalWrite(indic,LOW);
    delay(500);
  }
}

void cycle2() {
  // device offline cycle
  for (int i = 0; i < 900; i++) {
    digitalWrite(indic,HIGH);
    delay(500);
    digitalWrite(indic,LOW);
    delay(500);
  }
}

void loop() {
  // main relay cycle
  digitalWrite(relay,HIGH);
  cycle1();
  digitalWrite(relay,LOW);
  cycle2();
}
// ©Aniket Maity 2023