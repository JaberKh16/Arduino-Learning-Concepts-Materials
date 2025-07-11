void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(200); // Adjust the timeout for Serial.readString()
  pinMode(13, OUTPUT);
  Serial.println("Please enter H or L to control the LED."); // Use double quotes for strings
}

void loop() {
  // put your main code here, to run repeatedly:
  String inputted_string = read_string(); // Call the read_string function
  inputted_string.trim(); // to remove extra spaces
  Serial.println(inputted_string);

  if (inputted_string == "H") {
    digitalWrite(13, HIGH); // Turn LED ON
    delay(4000);
  } else if (inputted_string == "L") {
    digitalWrite(13, LOW); // Turn LED OFF
    delay(4000);
  } else {
    Serial.println("Error: Invalid input. Please enter H or L to control the LED.");
  }
}

// Function to read input from Serial
String read_string() {
  String read_string = "";
  while (read_string == "") { // Wait until a non-empty string is read
    if (Serial.available()) { // Check if data is available to read
      read_string = Serial.readString();
    }
  }
  return read_string;
}
