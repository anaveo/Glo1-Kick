/*
Hall Effect Sensor Test Code for Glo
Made by Om Anavekar
www.omlabs.me
*/

const int hallSensor = 3; //Hall sensor pin

//Hall state variable
int hallState = 0;

void setup() {
  //Begin Serial Comms
  Serial.begin(9600);

  //Set hall effect pin as inputs
  pinMode(hallSensor, INPUT);
}

void loop() {
  //Read hall sensor state
  hallState = digitalRead(hallSensor);

  //If magnet is detected, hallState will be LOW
  if (hallState == LOW) {
    Serial.println("Magnet detected");
  }

  delay(100);
}
