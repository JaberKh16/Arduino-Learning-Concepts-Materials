void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // generate random number
  // random(start, end)
  randomSeed(2342);

  // with analog pin
  // randomSeed(analogRead(A0)); // analog read with A0 pin

  for(int i = 0; i < 6; i++){
    Serial.print(random(1, 20));
    Serial.print(" ");
  }
  Serial.println("Done!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
