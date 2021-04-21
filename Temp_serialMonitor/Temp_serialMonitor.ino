// Project - Display temperature on serial monitor

float celsius =0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void findtemps(){
  float voltage=0;
  float sensor=0;
    //offset removal
  sensor=analogRead(0);
  voltage=(sensor*5)/1024;
  celsius=voltage*100;
}
void displaytemps(){
  Serial.print("Temperature is ");
  Serial.print(celsius,2);
  Serial.println(" deg. C");
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.flush();
 findtemps();
 displaytemps();
 delay(5000);
}
