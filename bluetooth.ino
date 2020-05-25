#include <SoftwareSerial.h>
int LED = 13; // Led connected
long int password1 = 92;// light on
long int password2 = 79; // light off
long int data;
SoftwareSerial blue(2,3); // bluetooth module connected here 

int Vresistor = A0; 
int Vdata = 0; 

void setup(){ 
   pinMode(LED, OUTPUT); 
   digitalWrite(LED, LOW);
   pinMode(Vresistor, INPUT); 
   Serial.begin(9600); 
   blue.begin(9600); 
   
} 
void loop(){ 
   // read the value at analog input 
   if(blue.available()>0) 
  {
  data = blue.parseInt();

  } 
  delay(400);
//Serial.print(data);

  if (data == password1)
  {
  
  digitalWrite(LED,HIGH);
  Serial.println("LED ON ");
  
   }
   
   if( data == password2)
   {
       digitalWrite(LED,LOW);
  Serial.println("LED OFF");
   }
   Vdata = analogRead(Vresistor); 

  blue.print("Variable Resistor: "); 
  blue.println(Vdata);
  blue.println("Electronic Clinic"); 
  blue.println("________________");

  delay(1000); 
}
