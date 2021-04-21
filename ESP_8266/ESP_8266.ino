#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "b6b24548f6594aed812e48b89d9595d0";

char ssid[] = "AndroidAP2E81";
char pass[] = "harvarpan";


void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

}

void loop() {
  Blynk.run();

}
