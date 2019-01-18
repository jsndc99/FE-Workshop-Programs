/*
  Proximity
  Turns on and off the internal LEDconnected to digital pin 13,
  when any object is detected by the proximity sensor

  LED_BUILTIN denotes the internal LED of any Arduino
*/

// the number of the proximity sensor pin
int proxPin = 2;     

// variable for reading the proximity sensor status
int proxState = LOW;
//int proxState = HIGH;

//Mandatory function required in all 'sketches', runs only once after Arduino is switched ON
void setup()    
{
  //Sets built-in LED as output
  pinMode(LED_BUILTIN, OUTPUT);  
  
  //Sets sensor as input
  pinMode(proxPin, INPUT);  
}

//Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
void loop() 
{
  // read the state of the sensor value:
  proxState = digitalRead(proxPin); 

  // check if the state of sensor is ON or OFF
  if (proxState == HIGH)   
    //If value is 1 then LED turns ON
    digitalWrite(LED_BUILTIN, HIGH); 
  else 
    //If value is 0 then LED turns OFF
    digitalWrite(LED_BUILTIN, LOW);

   /*if (proxState == LOW)   
    digitalWrite(LED_BUILTIN, HIGH); 
  else 
    igitalWrite(LED_BUILTIN, LOW);*/
}
