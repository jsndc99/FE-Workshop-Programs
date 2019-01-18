/*Bluetooth LED
  This code turns internal LED 'ON' when signal is sent from a phone via bluetooth

  LED_BUILTIN denotes the internal LED of any Arduino
*/
char data = 0;  //Variable for storing received data
void setup()  //Mandatory function required in all 'sketches', runs only once after Arduino is switched ON 
{
  Serial.begin(9600); //Sets the data rate in bits per second (baud rate) for serial data transmission
  pinMode(LED_BUILTIN, OUTPUT); //Sets built-in LED as output pin
}

void loop()  //Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
{
  if(Serial.available() > 0)  //Makes sure data from bluetoth TX can be received
  {
    data = Serial.read(); //Read the incoming data and store it into variable data
    Serial.print(data); //Print value inside data in Serial monitor
    
    Serial.print("\n"); //New line 
    
    if(data == '1') //Checks whether value of data is equal to 1 
    {
      Serial.print("LED ON\n"); //Prints string in Serial Monitor
      digitalWrite(LED_BUILTIN, HIGH);  //If value is 1 then LED turns ON
    }
    else if(data == '0')  //Checks whether value of data is equal to 0
    {
       Serial.print("LED OFF\n"); //Prints string in Serial Monitor
      digitalWrite(LED_BUILTIN, LOW); //If value is 0 then LED turns OFF
    }
  }                            
}
