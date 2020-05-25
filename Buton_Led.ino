int led =13;
int btn =2;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(btn),schimba,RISING);
}
int ok=0,t=0,click=0;
void schimba(){
  click++;
  click=click%2;
 }

void loop (){
  if(click==1){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  
  delay(50);
  
}
