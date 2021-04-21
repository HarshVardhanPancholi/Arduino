#include <ESP8266WiFi.h>

void setup() {

Serial.begin(9600);
}

void loop()
{
  byte serin=0;
  if (Serial.available()>0)
  {
    serin=Serial.read();
    delay(100);
    Serial.println(serin);
    delay(100);
    Serial.write(serin);
  }
  else
  {
    Serial.println("No data received");
    delay(5000);
  }

}
