int d = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int a=2;a<6;a++)
   {
    digitalWrite(a,HIGH);
    delay(d);
    digitalWrite(a,LOW);
    delay(d);
   }
  for (int a=4;a>2;a--)
   {
    digitalWrite(a,HIGH);
    delay(d);
    digitalWrite(a,LOW);
    delay(d);
   }

}
