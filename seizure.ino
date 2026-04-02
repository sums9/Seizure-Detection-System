const int signalPin = 9; // PWM output pin

void setup() {
  pinMode(signalPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Simulator Started");
}

void loop() {
  // 1. NORMAL STATE (Baseline)
  Serial.println("Normal baseline signal...");
  
  analogWrite(signalPin, 75);  // ~1.47V (PWM equivalent)
  delay(5000);                // 5 seconds baseline

  // 2. SEIZURE SPIKE
  Serial.println("--- ALERT: Simulating Seizure Spike! ---");
  
  analogWrite(signalPin, 220); // ~4.3V (PWM equivalent)
  delay(1000);                 // Hold spike

  // 3. RETURN TO NORMAL (IMPORTANT FIX)
  Serial.println("Returning to baseline...");
  
  analogWrite(signalPin, 75);
  delay(2000); // stabilization time
}