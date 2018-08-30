/*
  Button
  Turns on and off the internal LEDconnected to digital pin 13,
  when pressing a pushbutton attached to pin 2

  LED_BUILTIN denotes the internal LED of any Arduino
*/
const int buttonPin = 2;     // the number of the pushbutton pin

int buttonState = 0;         // variable for reading the pushbutton status

void setup()   //Mandatory function required in all 'sketches', runs only once after Arduino is switched ON 
{
  pinMode(LED_BUILTIN, OUTPUT);  //Sets built-in LED as output pin
  pinMode(buttonPin, INPUT);  //Sets button as input pin
}

void loop() //Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
{
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:

  if (buttonState == HIGH)   // check if the buttonstate is ON or OFF
    digitalWrite(ledPin, HIGH); //If value is 1 then LED turns ON
  else 
    digitalWrite(ledPin, LOW);  //If value is 0 then LED turns OFF
}


