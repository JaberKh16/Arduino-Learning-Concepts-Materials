#include <UnoWiFiDevEd.h>

void setup() {
  // put your setup code here, to run once:
  // Progam-1: read a string

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  String setup_string = "";

  // read the string readString() 
  while(setup_string == ""){
    setup_string = Serial.readString();
  }
  Serial.println(setup_string);
}
