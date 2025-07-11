void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // defined c-type string
  char c_string[8] = "Arduino";

  // get the length
  int c_length = strlen(c_string);
  Serial.println(c_length);


  // copy string 
  // strcpy(dest, src)
  char cpy_string[8]; 
  strcpy(cpy_string, c_string);
  Serial.println(cpy_string);


  // compare string
  // strcmp(string, cmp_string) => returns booleans 0 or 1
  int compare_value = strcmp(c_string, "Arduino");
  if(compare_value == 0){
    Serial.println('Equal');
  } else{
    Serial.println('Not Equal');
  }

  // concat string
  // strcat(string1, string2)
  char c_string2[8] = "z";
  strcat(c_string2, c_string);
  Serial.println(c_string2);


  

}

void loop() {
  // put your main code here, to run repeatedly:

}

