/*
 ESP8266 Blink by Bibek Poddar

 code 1: Hello_world
 Blink the  LED.

 The Cathode is coonected to Pin D2 and annode to Gnd.
 You need to have a 100 ohm resistor betwween LED and D2 pin
  
*/

void setup() {
  pinMode(D2, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D2, LOW);   // Turn the LED on (Note that LOW is the voltage level
                                    // but actually the LED is on; this is because 
                                    // it is active low on the ESP-01)
  delay(1000);                      // Wait for a second
  digitalWrite(D2 ,HIGH);  // Turn the LED off by making the voltage HIGH
  delay(2000);                      // Wait for two seconds (to demonstrate the active low LED)
}
