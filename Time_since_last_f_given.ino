int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.print("Time since last f*&% given: ");
  Serial.print(millis());
  Serial.println(" hours");
}
