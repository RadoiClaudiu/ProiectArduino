#include <dht.h>
#include <SoftwareSerial.h>
#define DHT11_PIN A0

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

dht DHT;
SoftwareSerial blue(2,3); // bluetooth module connected here 
long int data; 
int vent= 13;
long int password1 = 92;
long int password2 = 79; 
long int password20 = 20; 
long int password21 = 21; 
long int password22 = 22;  
long int password23 = 23;
long int password24 = 24; 

void setup(){
  lcd.begin(16,2);//Defining 16 columns and 2 rows of lcd display
  lcd.backlight();//To Power ON the back light

  pinMode(vent, OUTPUT); 
  Serial.begin(9600); 
  delay(500);
  blue.begin(9600); 
} 

void loop(){
   DHT.read11(DHT11_PIN);
   int temp = DHT.temperature;
   blue.print("Umiditatea = ");
   blue.print(DHT.humidity);
   blue.print("%  ");
   blue.print("Temperatura = ");
   blue.print(DHT.temperature); 
   blue.println("C  ");

   lcd.setCursor(0,0);
   lcd.print("Temperatura:");
   lcd.print(temp);
   lcd.print("C");

   Serial.print("Current humidity = ");
   Serial.print(DHT.humidity);
   Serial.print("%  ");
   Serial.print("temperature = ");
   Serial.print(DHT.temperature); 
   Serial.println("C  ");
   delay(2000);
   Serial.println(temp);

   if(blue.available()>0) 
   {
      data = blue.parseInt();
   } 
   delay(400);
   if(data==password20){
      if(temp > 20){
         digitalWrite(vent,LOW);
         Serial.println("VENT OFF20");
      }else digitalWrite(vent,HIGH);
   }else if(data==password21){
            if(temp > 30){
               digitalWrite(vent,LOW);
               Serial.println("VENT OFF21");
            }else digitalWrite(vent,HIGH);
         }else if(data==password22){
                  if(temp > 22){
                     digitalWrite(vent,LOW);
                     Serial.println("VENT OFF22");
                  }else {digitalWrite(vent,HIGH);}
               }else if(data==password23){
                        if(temp > 23){
                           digitalWrite(vent,LOW);
                           Serial.println("VENT OFF23");
                        }else digitalWrite(vent,HIGH);
                     }else if(data==password24){
                              if(temp > 24){
                                 digitalWrite(vent,LOW);
                                 Serial.println("VENT OFF24");
                              }else digitalWrite(vent,HIGH);
                           }
   if (data == password1)
   {
      digitalWrite(vent,HIGH);
      Serial.println("VENT ON");
      delay(10000);
      digitalWrite(vent,LOW);
      Serial.println("VENT OFF ");
      data=0;
   }
   if( data == password2)
   {
      digitalWrite(vent,LOW);
      Serial.println("VENT OFF");
   }
   Serial.print("data este:");
   Serial.print(data);
//delay(2000);
}
