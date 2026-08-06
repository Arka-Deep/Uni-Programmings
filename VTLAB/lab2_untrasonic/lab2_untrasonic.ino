const int ledPin = 13; 

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH);
}

void setup()
{ pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //Serial.print("DISTANCE IS ");
 // Serial.println(0.01723 * readUltrasonicDistance(12, 14));
  float dist =0.01723 * readUltrasonicDistance(12, 14);
  Serial.println(dist);
  if (dist<3.9){
    //Serial.println("Active");
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW); 
  }
  //Serial.println("CM");
  delay(100); 
}