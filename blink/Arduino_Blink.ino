int a = 2;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(a, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(a, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}