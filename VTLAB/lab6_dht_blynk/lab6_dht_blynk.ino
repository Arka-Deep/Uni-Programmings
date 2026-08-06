#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL3zYBlprnM"
#define BLYNK_TEMPLATE_NAME "dht esp32"
#define BLYNK_AUTH_TOKEN "dgR64wlSFXHxBnW6EbpEplFxfqtL6lDj"
#include <SPI.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>
#define DHTPIN 14          // What digital pin we're connected to
char ssid[] = "abcdez";
char pass[] = "12345678";
#define DHTTYPE DHT11     // DHT 11
DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;
void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Blynk.virtualWrite(V2, h);
  Blynk.virtualWrite(V1, t);
}
void setup()
{
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  dht.begin();
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
}

