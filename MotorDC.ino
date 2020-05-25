int motorPin = 7;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 
 
 
void loop() 
{ analogWrite(motorPin, HIGH);
delay(5000);
//  if (Serial.available())
//  {
//    Serial.println("Saaaaaaaaaaa");
//    int speed = Serial.parseInt();
//    if (speed >= 0 && speed <= 255)
//    {
//      Serial.println("bbbbbbbbbb");
//      analogWrite(motorPin, LOW);
//    }
//  }
} 
