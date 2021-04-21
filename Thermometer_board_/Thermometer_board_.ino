// Project - Quick Read thermometer(using breadboard and LM35)
#define LED 6

int blinks = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

int checktmp() {
  float voltage =0;
  float celcius =0;
  float htemp =40;
  float ltemp =30;
  float sensor =0;
  int result;

  //convert voltage input to temperature celcius
  sensor =analogRead(0);
  voltage = (sensor * 5) / 1024;
  celcius = voltage*100;

  //conditions for temperature range
  if(celcius < ltemp)
  {
    result=2;
  }
  else if(celcius >= ltemp && celcius <= htemp)
  {
    result=4;
  }
  else if(celcius > htemp)
  {
    result=6;
  }
  return result;
}

void blinkLED(int cycles, int del)
{
  for(int z=0; z<cycles; z++)
  {
    digitalWrite(LED,HIGH);
    delay(del);
    digitalWrite(LED,LOW);
    delay(del);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  blinks = checktmp();
  blinkLED(blinks,700);
  delay(3000);
}
