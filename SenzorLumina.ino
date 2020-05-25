

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
   pinMode(13, OUTPUT);
}

void loop() {
  // reads the input on analog pin A0 (value between 0 and 1023)

  int lightPin = A0 ;  //Photoresistor Pin
  int val = analogRead(lightPin); //Read Pin
  val = map(val, 0, 1023, 0, 100);  //Convert Value From Pin To Percent
  Serial.print("Light Intencity" ) ;  // Display Percent
Serial.print(val ) ;
Serial.println("%" ) ;
analogWrite(13,20*val);

//int val = analogRead(A0);
//  val = map(val, 0, 1023, 0, 255);
//  analogWrite(13, val);


  
//  int analogValue = analogRead(A0);
//
//  Serial.print("Analog reading = ");
//  Serial.println(analogValue);   // the raw analog reading
//  if (analogValue < 140) {
//    Serial.println(" Blit:");
//    analogWrite(13,255);
//  }else if(analogValue < 400) {
//    Serial.println(" Lumina:");
//    analogWrite(13,140);
//  }else if(analogValue < 1000) {
//    Serial.println(" Intuneric:");
//    analogWrite(13,55);
//  }
//



  
  // We'll have a few threshholds, qualitatively determined
//  if (analogValue < 10) {
//    Serial.println(" - Dark");
//    //digitalWrite(13, LOW);
//    analogWrite(13,255);
//  } else if (analogValue < 200) {
//    Serial.println(" - Dim");
//    //digitalWrite(13, LOW);
//    analogWrite(13,155);
//  } else if (analogValue < 500) {
//    //digitalWrite(13, HIGH);
//    analogWrite(13,55);
//    Serial.println(" - Light");
//  } else if (analogValue < 800) {
//    Serial.println(" - Bright");
//    
//  } else {
//    Serial.println(" - Very bright");
//  }

  delay(30);
}
