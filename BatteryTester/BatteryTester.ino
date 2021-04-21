// Project - Low Voltage Battery tester

// CAUTION- use less then 5volts

#define Lvo 2                                    //  use blueled
#define Mvo 4                                    //  use yellowled
#define Hvo 6                                    //  use redled
                                                 //  According to wavelength

int analogValue =0;
float voltage =0;
int ledDelay =2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(Lvo,OUTPUT);
  pinMode(Mvo,OUTPUT);
  pinMode(Hvo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue= analogRead(0);
  voltage= 0.0048*analogValue;
  if(voltage>=1.6)
   {
     digitalWrite(Lvo,HIGH);
     delay(ledDelay);
     digitalWrite(Lvo,LOW);
   }
   else if(voltage<1.6 && voltage >1.4)
   {
     digitalWrite(Mvo,HIGH);
     delay(ledDelay);
     digitalWrite(Mvo,LOW);
   }
   else if(voltage<=1.4)
   {
     digitalWrite(Hvo,HIGH);
     delay(ledDelay);
     digitalWrite(Hvo,LOW);
   }
}
