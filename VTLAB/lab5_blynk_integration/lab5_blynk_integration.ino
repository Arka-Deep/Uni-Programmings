
#define BLYNK_TEMPLATE_ID "TMPL3-9btQ5Mw"
#define BLYNK_TEMPLATE_NAME "lab5 blink led"
#define BLYNK_AUTH_TOKEN "t2P9N45gT6Yh6vZor3qbrpWAuuMMChTd"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char ssid[] = "abcde";
char pass[] = "12345678";
WidgetLED led1(V3);
BlynkTimer timer;
void blinkLedWidget()
{
  if (led1.getValue()) {
    led1.off();
    Serial.println("LED on V1: off");
  } else {
    led1.on();
    Serial.println("LED on V1: on");
  }
}
void setup()
{
  // Debug console
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  // You can also specify server:
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, IPAddress(192,168,1,100), 8080);

  timer.setInterval(1000L, blinkLedWidget);
}
void loop()
{
  Blynk.run();
  timer.run();
}

