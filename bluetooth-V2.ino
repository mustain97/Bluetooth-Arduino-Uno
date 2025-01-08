#include <SoftwareSerial.h>
SoftwareSerial bluetooth(0,1);//RxD  TxD

#define RL1 13
#define RL2 12
#define RL3 11
#define RL4 10
char MITdata; 

void setup() 
{
Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
pinMode(RL1, OUTPUT);        //Sets digital pin 13 as output pin
pinMode(RL2, OUTPUT);        //Sets digital pin 12 as output pin
pinMode(RL3, OUTPUT);        //Sets digital pin 11 as output pin
pinMode(RL4, OUTPUT);        //Sets digital pin 10 as output pin
}
void loop()
{
if(Serial.available() > 0)  // Send data only when you receive data:
{
MITdata = Serial.read();      
Serial.println(MITdata);        
Serial.print("\n");      
if(MITdata == '1')          
{digitalWrite(RL1, HIGH);} 
if(MITdata == '2')          
{digitalWrite(RL1, LOW);} 
if(MITdata == '3')          
{digitalWrite(RL2, HIGH);} 
if(MITdata == '4')      
{digitalWrite(RL2, LOW);}
if(MITdata == '5')          
{digitalWrite(RL3, HIGH);} 
if(MITdata == '6')      
{digitalWrite(RL3, LOW);} 
if(MITdata == '7')          
{digitalWrite(RL4, HIGH);} 
if(MITdata == '8')      
{digitalWrite(RL4, LOW);}                            
}
}