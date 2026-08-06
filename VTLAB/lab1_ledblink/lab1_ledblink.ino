
const int ledPin = 1; 
const int ledPin2 = 26; 
//1 2 4
void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(500);                  
  digitalWrite(ledPin, LOW); 
  digitalWrite(ledPin2, HIGH);
  delay(500);                  
}