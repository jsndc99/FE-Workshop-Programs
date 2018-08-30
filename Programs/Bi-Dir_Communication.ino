/*Bidirectional Communication
  This code sends and receives messages from a phone to the Arduino

  SoftwareSerial is a header file consisting of functions making it easier to do a task
*/
#include <SoftwareSerial.h> //informs program to use this file in the program

SoftwareSerial mySerial (8,9);  //Creates an object named 'mySerial' such that pin 8 is used for receiving data and 9 for transimitting data

void setup()  //Mandatory function required in all 'sketches', runs only once after Arduino is switched ON 
{
  mySerial.begin(9600); //Sets the data rate in bits per second (baud rate) for serial data transmission through the phone
  Serial.begin(9600); //Sets the data rate in bits per second (baud rate) for serial data transmission through the phone   
  delay(100); // wait for serial port to connect, needed for native USB port only
}

void loop() //Mandatory function required in all 'sketches', runs forever till Arduino is switched OFF
{
  if (Serial.available()>0) //makes sure data from bluetoth TX can be received
    mySerial.write(Serial.read());  //to send commands received from Serial Monitor(pc) to Mobile Phone

  if (mySerial.available()>0) //makes sure data from bluetoth TX can be received
    Serial.write(mySerial.read());   //to send commands received from Mobile Phone to Serial Monitor(pc)
}
