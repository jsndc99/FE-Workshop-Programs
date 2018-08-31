/*
  Proximity
  Turns on and off the internal LEDconnected to digital pin 13,
  when pressing a pushbutton attached to pin 2

  LED_BUILTIN denotes the internal LED of any Arduino
*/

// the number of the proximity sensor pin
int proxPin = 2;     

// variable for reading the pushbutton status
int proxState = 0;         

//Mandatory function required in all 'sketches', runs only once after Arduino is switched ON
void setup()    
{
  //Sets built-in LED as output pin
  pinMode(LED_BUILTIN, OUTPUT);  
  
  //Sets button as input pin
  pinMode(proxPin, INPUT);  
}

//Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
void loop() 
{
  // read the state of the pushbutton value:
  proxState = digitalRead(proxPin); 

  // check if the buttonstate is ON or OFF
  if (proxState == HIGH)   
    //If value is 1 then LED turns ON
    digitalWrite(LED_BUILTIN, HIGH); 
  else 
    //If value is 0 then LED turns OFF
    digitalWrite(LED_BUILTIN, LOW);  
}


