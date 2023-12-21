void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT_PULLUP); //SWITCH
  pinMode(7, OUTPUT); //LED
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(4) == LOW) {
    //Reading the switch to be on
    digitalWrite(7, HIGH); //light the led
  }
  else {
    // if switch is off
    digitalWrite(7, LOW); //led off
  }
}
