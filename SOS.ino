int redLED=4;
float pi=3.14;
int dit=50;
int dah=150;
int LongW = 1000;

String myName = "Albert Kodua";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);

  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);

  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  delay(LongW);
}
