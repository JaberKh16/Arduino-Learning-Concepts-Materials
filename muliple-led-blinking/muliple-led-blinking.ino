void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

int arr_led[6] = {11, 10, 9, 6, 5, 3};  

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < arr_led.length -1; i++){
    pinMode(arr_led[i], OUTPUT);
  }
}

void multitple_led_bliking(int arr_led[]){
  
  for(int i = 0; i < arr_led.length - 1; i++){
    digitalWrite(arr_led[i], HIGH);
  }

  for(int i = 0; i < arr_led - 1; i++){
    digitalWrite(arr_led[i], LOW);
  }
}
