const int ledPin1 = 14; 
#define BLYNK_TEMPLATE_ID "TMPL3Q5uQMPtm"
#define BLYNK_TEMPLATE_NAME "set pin on esp"
#define BLYNK_AUTH_TOKEN "gqKvJF99owYSnMs47QY5_yd7047BoyFk"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char ssid[] = "abcdez";
char pass[] = "123456789";
BLYNK_WRITE(V0)
{
  int p1 = param.asInt(); // assigning incoming value from pin V1 to a variable
  // process received value
  digitalWrite(ledPin1, p1);

}
void setup()
{
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(ledPin1, OUTPUT);
}
void loop()
{
  Blynk.run();
}

