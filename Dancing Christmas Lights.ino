  void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  long randLED = random(8,14);
  long randDelay = random(100,501);
  digitalWrite(randLED, HIGH);
  delay(500);
  digitalWrite(randLED, LOW);
  delay(500);
}
