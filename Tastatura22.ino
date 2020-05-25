//int thresholds[16]={2,77,144,202,244,290,331,368,394,424,452,477,496,518,538,556};
//char keypad[16] = {'1','2','3','A','4','5','6','B','7','8','9','C','*','0','#','D'};
//
//void setup(){
//   Serial.begin(9600);
//}
// 
//void loop(){
//  int value = analogRead(A1);
//   Serial.println(value);
//  for(int i=0;i<16;i++){
//    if(abs(value - thresholds[i]) < 5){
//      Serial.println(keypad[i]);
//    
//    while(analogRead(A1)<1000){delay(1000);}
//    //
//    }
//    delay(100);
//  }
//}
//-------------------------------------------------------
void setup() 
{ 
  Serial.begin(9600);
}
 
void loop() 
{ 
  //Serial.println("buton: ");
  int num = analogRead(A1);
  //Serial.println(num);
  char button = ' ';
  switch (num)
  {
    case 59:
    Serial.println("1");
      button = '1';
      break;
    case 84:
    Serial.println("2");
      button = '2';
      break;
    case 631:
      button = '3';
      break;
    case 714:
      button = '4';
      break;
    case 695:
      button = '5';
      break;
    case 609:
      button = '6';
      break;
    case 930:
      button = '7';
      break;
    case 929:
      button = '8';
      break;
    case 923:
      button = '9';
      break;
    case 675:
      button = '*';
      break;
    case 650:
      button = '0';
      break;
    case 535:
      button = '#';
      break;
    case 661:
      button = 'A';
      break;
    case 642:
      button = 'B';
      break;
    case 925:
      button = 'C';
      break;
    case 581:
      button = 'D';
      break;
  }
  //Serial.println(button);
  delay(500);
}



//------------------------------------------------------------------
//
//#define button1    3196  
//#define button2   3256    
//#define button3   2620  
//#define button4   2968  
//#define button5   3020  
//#define button6   2468  
//#define button7   2772  
//#define button8   2816  
//#define button9   2332  
//#define buttonAst 3344  
//#define button0   3416  
//#define buttonHashtag   2736   
//#define buttonA   2576  
//#define buttonB   2428  
//#define buttonC   2296  
//#define buttonD   2684  
//
////and toll 0.5%
//#define toll 0.005
//
//
//void setup(){
//Serial.begin(9600);
//Serial.println("..booting");
//
//}
//
//void loop(){
//  
//int sensorValue=analogRead(A0);
//float voltage=sensorValue*(5000/1023);
////Serial.println(voltage);
//if (voltage>0) {
//    
//  if (voltage<=button1*(1+toll) && voltage>=button1*(1-toll)){
//    Serial.println("pressed button--> 1");
//  }else
//  if (voltage<=button2*(1+toll) && voltage>=button2*(1-toll)){
//    Serial.println("pressed button--> 2");
//  }else
//  if (voltage<=button3*(1+toll) && voltage>=button3*(1-toll)){
//    Serial.println("pressed button--> 3");
//  }else
//  if (voltage<=button4*(1+toll) && voltage>=button4*(1-toll)){
//    Serial.println("pressed button--> 4");
//  }else
//  if (voltage<=button5*(1+toll) && voltage>=button5*(1-toll)){
//    Serial.println("pressed button--> 5");
//  }else
//  if (voltage<=button6*(1+toll) && voltage>=button6*(1-toll)){
//    Serial.println("pressed button--> 6");
//  }else
//  if (voltage<=button7*(1+toll) && voltage>=button7*(1-toll)){
//    Serial.println("pressed button--> 7");
//  }else
//  if (voltage<=button8*(1+toll) && voltage>=button8*(1-toll)){
//    Serial.println("pressed button--> 8");
//  }else
//  if (voltage<=button9*(1+toll) && voltage>=button9*(1-toll)){
//    Serial.println("pressed button--> 9");
//  }else
//  if (voltage<=button0*(1+toll) && voltage>=button0*(1-toll)){
//    Serial.println("pressed button--> 0");
//  }else
//  if (voltage<=buttonAst*(1+toll) && voltage>=buttonAst*(1-toll)){
//    Serial.println("pressed button--> *");
//  }else
//  if (voltage<=buttonHashtag*(1+toll) && voltage>=buttonHashtag*(1-toll)){
//    Serial.println("pressed button--> #");
//  }else
//  if (voltage<=buttonA*(1+toll) && voltage>=buttonA*(1-toll)){
//    Serial.println("pressed button--> A");
//  }else
//  if (voltage<=buttonB*(1+toll) && voltage>=buttonB*(1-toll)){
//    Serial.println("pressed button--> B");
//  }else
//  if (voltage<=buttonC*(1+toll) && voltage>=buttonC*(1-toll)){
//    Serial.println("pressed button--> C");
//  }else
//  if (voltage<=buttonD*(1+toll) && voltage>=buttonD*(1-toll)){
//    Serial.println("pressed button--> D");
//  }
//  
//}
//
//delay(300);
//
//}//end loop
//-----------------------------------------------------------
//void setup(){
//  Serial.begin(9600);
//  
//}
//void loop(){
//  int senzorvalue = analogRead(A1); 
//  Serial.print(senzorvalue);
//  float voltage = senzorvalue*(500/1023);
//  Serial.print(voltage);
//  Serial.println("mv");
//  if (senzorvalue<=701*(1+0.005) && senzorvalue>=701*(1-0.005)){
//    Serial.println("pressed button--> 1");
//  }
//  delay(100);
//}
