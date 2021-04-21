//Project - Serial monitor input
int a;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 a=0;
 Serial.flush();
 while(Serial.available()==0)
 {
  //blank space
 }
 while(Serial.available()>0)
 {
  a=Serial.read()-'0';        //removing ASCII offset
 }

 //Output screen
 Serial.print("U entered: ");
 Serial.println(a);
 Serial.print(a);
 Serial.print(" multiplied by 2 is ");
 a = a*2;
 Serial.println(a);
}
