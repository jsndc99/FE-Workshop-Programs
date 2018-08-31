/*Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  LED_BUILTIN denotes the internal LED of any Arduino
*/

//Mandatory function required in all 'sketches', runs only once after Arduino is switched ON 
void setup() 
{
  //Sets built-in LED as output pin
  pinMode(LED_BUILTIN, OUTPUT); 
}

//Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
void loop() 
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);  
  
  // wait for a second
  delay(1000);  
  
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  
  // wait for a second
  delay(1000);  
}
