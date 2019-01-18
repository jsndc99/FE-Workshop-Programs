/*Bidirectional Communication
  This code sends and receives messages from a phone to the Arduino

  SoftwareSerial is a header file consisting of functions making it easier to do a task
*/

//informs program to use this file in the program
#include <SoftwareSerial.h> 

//Creates an object named 'mySerial' such that pin 8 is used for receiving data and 9 for transimitting data
SoftwareSerial mySerial (8,9);  

//Mandatory function required in all 'sketches', runs only once after Arduino is switched ON
void setup()   
{
  //Sets the data rate in bits per second (baud rate) for serial data transmission through the phone
  mySerial.begin(9600); 
  
  //Sets the data rate in bits per second (baud rate) for serial data transmission through the phone 
  Serial.begin(9600);   
  
   // wait for serial port to connect, needed for native USB port only
  delay(100);
}

//Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
void loop() 
{  
  //makes sure data from bluetoth TX can be received  
  if (Serial.available()>0) 
  
      //to send commands received from Serial Monitor(pc) to Mobile Phone
      mySerial.write(Serial.read());  

  //makes sure data from bluetoth TX can be received
  if (mySerial.available()>0) 
    //to send commands received from Mobile Phone to Serial Monitor(pc)
    Serial.write(mySerial.read());   
}
