int buttonA = 2;  // Start button
int buttonB = 3;  // Stop button
int motor = 9;    // Motor output
bool motorState = false; // Variable to track motor state

void setup() {
  pinMode(buttonA, INPUT);
  pinMode(buttonB, INPUT);
  pinMode(motor, OUTPUT);
}

void loop() {
  if (digitalRead(buttonA) == HIGH) {
    motorState = true;  // Turn motor ON
  }
  
  if (digitalRead(buttonB) == HIGH) {
    motorState = false; // Turn motor OFF
  }

  digitalWrite(motor, motorState ? HIGH : LOW); // Control motor based on state
}
