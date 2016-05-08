/*
 * Copyright 2016 (C) layadcircuits.com
 * Project: 
 * Formula for the LM35 analog temperature sensor.
 * This code assumes the LM35 is hooked to pin A0.
 * For Questions/Comments: chris@layadcircuits.com
 * Revision History:
 * 1.0 - initial commit
 */
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temperature = analogRead(A0) * 0.488;
  Serial.print(temperature);
  Serial.println(" C");
  delay(1000);
}
