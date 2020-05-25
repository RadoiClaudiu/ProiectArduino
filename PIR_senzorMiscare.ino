int sensorState = 0;
//int motor=9;
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  //pinMode(9, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  // read the state of the sensor/digital input
  sensorState = digitalRead(2);
  // check if sensor pin is HIGH. if it is, set the
  // LED on.
  if (sensorState == HIGH) {       
    digitalWrite(13, HIGH);
    
//       if (Serial.available()) {
//      int speed = Serial.parseInt();
//      if (speed >= 0 && speed <=  55) {
//         analogWrite(motor, speed);
//      }
//   }

    //Serial.println("Sensor activated!");
  } else {
    digitalWrite(13, LOW); 
     //digitalWrite(motor,LOW);
  }
  //delay(10); // Delay a little bit to improve simulation performance
}
