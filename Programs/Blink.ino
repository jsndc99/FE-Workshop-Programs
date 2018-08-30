/*Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  LED_BUILTIN denotes the internal LED of any Arduino
*/

void setup()  //Mandatory function required in all 'sketches', runs only once after Arduino is switched ON 
{
  pinMode(LED_BUILTIN, OUTPUT); //Sets built-in LED as output pin
}

void loop() //Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
{
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);  // wait for a second
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(1000);  // wait for a second
}
