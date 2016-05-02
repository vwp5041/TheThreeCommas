#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Blynk Auth Token 
char auth[] = "30c54a44e3104732b3f676e117eda6ae";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, "iPhone", "Appleuno");
}

void loop()
{
  Blynk.run();
}
