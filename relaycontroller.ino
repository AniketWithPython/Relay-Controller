#define relay 13
#define indic 2

void setup() {
  pinMode(relay, OUTPUT);
  pinMode(indicator, OUTPUT);
}

void indicator() {
  // indicator cycle
  for (int i = 0; i < 1800; i++) {
    digitalWrite(indic,HIGH);
    delay(500);
    digitalWrite(indic,LOW);
    delay(500);
  }
}

void loop() {
  // main relay cycle
  digitalWrite(relay,HIGH);
  indicator();
  digitalWrite(relay,LOW);
  indicator();
}
// ©Aniket Maity 2022