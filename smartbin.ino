



#include <Servo.h>

Servo servomain;
int trigpin=10;
int echopin=11;
int distance;

long duration;



void setup()
{
  Serial.begin(9600);
  servomain.attach(3);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  
}
void loop()


{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(30);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.0342/2;
  Serial.println(distance);

if(distance<30)
{
  servomain.write(0);
  delay(15);
}
else
{
  servomain.write(
    
    90);
  delay(10);

}
}
