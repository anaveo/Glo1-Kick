/*
2 Button Test Code for Glo
Made by Om Anavekar
www.omlabs.me
*/

const int button1 = 4; // button 1
const int button2 = 5; // button 2

//Button state variables
int b1State = 0;
int b2State = 0;

void setup() {
  //Begin Serial Comms
  Serial.begin(9600);

  //Set button pins as inputs
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  //Read button states
  b1State = digitalRead(button1);
  b2State = digitalRead(button2);

  //If button 1 is pressed, b1State will be HIGH
  if (b1State == HIGH) {
    Serial.println("Button 1 on");
  }
  
  //If button 2 is pressed, b2State will be HIGH
   if (b2State == HIGH) {
    Serial.println("Button 2 on");
   }

delay(100);
}
