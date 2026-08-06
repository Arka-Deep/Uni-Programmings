#define SECRET_SSID "abcdz"		// replace MySSID with your WiFi network name
#define SECRET_PASS "12345678"	// replace MyPassword with your WiFi password
#define SECRET_CH_ID 3263227			// replace 0000000 with your channel number
#define SECRET_WRITE_APIKEY "B4YV19U3829D8Z34"   // replace XYZ with your channel write API Key
#include "DHT.h"
#define DHTPIN 4   
#define DHTTYPE DHT11
#include <WiFi.h>
#include "ThingSpeak.h" // always include thingspeak header file after other header files and custom macros
char ssid[] = SECRET_SSID;   // your network SSID (name) 
char pass[] = SECRET_PASS;   // your network password
int keyIndex = 0;            // your network key Index number (needed only for WEP)
WiFiClient  client;
unsigned long myChannelNumber = SECRET_CH_ID;
const char * myWriteAPIKey = SECRET_WRITE_APIKEY;
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);  //Initialize serial
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo native USB port only
  }  
  WiFi.mode(WIFI_STA);   
  ThingSpeak.begin(client);  // Initialize ThingSpeak
  dht.begin();
}
void loop() {
  delay(1000);
  // Connect or reconnect to WiFi
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(SECRET_SSID);
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass); // Connect to WPA/WPA2 network. Change this line if using open or WEP network
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConnected.");
  }
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.println();
  int temp=(int)t;
  int x = ThingSpeak.writeField(myChannelNumber, 1, temp, myWriteAPIKey);
  if(x == 200){
    Serial.println("Temperature Channel update successful.");
  }
  else{
    Serial.println("Problem updating Temperature channel. HTTP error code " + String(x));
  }
  int humi=(int)h;
  int y = ThingSpeak.writeField(myChannelNumber, 2, humi, myWriteAPIKey);
  if(y == 200){
    Serial.println("Humidity Channel update successful.");
  }
  else{
    Serial.println("Problem updating humidity channel. HTTP error code " + String(y));
  }
}
