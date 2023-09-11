



void setup() {


  // initialize serial:


  Serial.begin(9600);


  // make the pins outputs:

  pinMode(LED_BUILTIN, OUTPUT);



}


void loop() {


  // if there's any serial available, read it:


  while (Serial.available() > 0) {


    // look for the next valid integer in the incoming serial stream:


    int info = Serial.parseInt();


    // look for the newline. That's the end of your sentence:


    if (Serial.read() == '\n') {


      // constrain the values to 0 - 255 and invert


      // if you're using a common-cathode LED, just use "constrain(color, 0, 255);"





      // print the three numbers in one string as hexadecimal:

      if (info == 120) {
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(1000);                       // wait for a second
        } else {
            digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
            delay(1000);
          }


    }


  }

}
