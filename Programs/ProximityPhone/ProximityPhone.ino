/*ProximityPhone
  This code sends a message to the phone when the proximity sensor senses an object
*/

//declare the input pin for Proximity sensor
int proxpin=8;

//to store state of sensor, we assume no object detected
int presence=LOW;
//int presence=HIGH;

//to read state of sensor
int val;

//Mandatory function required in all 'sketches', runs only once after Arduino is switched ON 
void setup()
{
  // declare sensor as input
  pinMode(proxpin, INPUT);
  
  //Sets the data rate in bits per second (baud rate) for serial data transmission through the phone
  Serial.begin(9600);

  // wait for serial port to connect, needed for native USB port only
  delay(100); 
}

//Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
void loop()
{
  //read input from proximity sensor
  val=digitalRead(proxpin);
  
  //if presence is detected
  if(val==HIGH)
  {
    //if there was no presence before
    if(presence==LOW)
    {
      //means object just entered range of sensor
      Serial.write("Presence detected");
      
      //updating state of sensor
      presence=HIGH;
    }
  }
    
  //if presence is not detected
  else
  {
    //if there was presence before
    if(presence==HIGH)
    {
      //means object just exited range of sensor
      Serial.write("No Presence detected");
      
      //updating state of sensor
      presence=LOW;
    }
  }

  /*if(val==LOW)
  {
    if(presence==HIGH)
    {
      Serial.write("Presence detected");
      presence=LOW;
    }
  }
    
  //if presence is not detected
  else
  {
    //if there was presence before
    if(presence==LOW)
    {
      Serial.write("No Presence detected");
      presence=HIGH;
    }
  }*/
}
