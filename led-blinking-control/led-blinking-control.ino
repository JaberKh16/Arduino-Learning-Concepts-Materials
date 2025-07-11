void setup() {
  // Setup runs once
  Serial.begin(9600);           // Initialize serial communication
  pinMode(11, OUTPUT);          // Set pin 11 as an output
}

void loop() {
  // Loop runs repeatedly
  Serial.println("Please enter H or L to control the LED:");
  
  String inputted_string = read_string(); // Call the read_string function
  inputted_string.trim(); // to remove extra spaces



  if(inputted_string != ""){
      if (inputted_string == "H") {
        control_blinking_high();
      } else if (inputted_string == "L") {
        control_blinking_low();
      } else {
        Serial.println("Error: Invalid input. Please enter H or L to control the LED.");
      }
  } else{
    Serial.println("There is no input given.");
  }

}


String read_string() {
  String read_string = "";
  while (read_string == "") { // Wait until a non-empty string is read
    if (Serial.available()) { // Check if data is available to read
      read_string = Serial.readString();
    }
  }
  return read_string;
}

void control_led_blinking(){
  // analogWrite(led_pin, led_val);
  analogWrite(11, 0);
  delay(500);

  analogWrite(11, 128);
  delay(500);

  analogWrite(11, 255);
  delay(500);
  
}


// Incremental LED brightness
void control_blinking_high() {
  Serial.println("Increasing brightness...");
  for (int i = 0; i <= 255; i++) {  // Loop from 0 to 255
    analogWrite(11, i);             // Set PWM duty cycle
    delay(300);                      // Small delay for smooth transition
  }
}

// Decremental LED brightness
void control_blinking_low() {
  Serial.println("Decreasing brightness...");
  for (int i = 255; i >= 0; i--) {  // Loop from 255 to 0
    analogWrite(11, i);             // Set PWM duty cycle
    delay(300);                      // Small delay for smooth transition
  }
}


