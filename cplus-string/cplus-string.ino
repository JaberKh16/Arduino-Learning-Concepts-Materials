void setup() {
  // put your setup code here, to run once:
  String message = "Arduino is cool!";

  // get the length
  int s_length = messsage.length();
  Serial.println('Length of the string is: ');
  Serial.println(s_length);

  // get the substring
  string s_substring = message.substring(2, 6);
  Serial.println(s_substring);

  // get the index value of particular char
  string index_value = message.indexOf(4);
  Serial.println(index_value);


  // concate string
  String txt1 = "Some is ";
  String txt2 = "very fishy!";
  String concat_txt = txt1.concat(txt2);


  // check equality
  int is_equals = txt1.equals(txt2); // returns 0 if equals, otherwise 1
  if(is_equals == 0){
    Serial.println('Equal');
  } else{
    Serial.println('Not equal');
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
