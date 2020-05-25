#include "AnalogMatrixKeypad.h"
AnalogMatrixKeypad ::AnalogMatrixKeypad(byte ap){

  analogPin=ap;
  Time=250;
  threshold=3;
}
void AnalogMatrixKeypad::setTime(unsigned int time){
  Time=time;
}
void AnalogMatrixKeypad::setThresholdValue(byte tv){
  threshold = tv;
}
char AnalogMatrixKeypad::readKey(){
  char key = KEY_NOT_PRESSED;
  int aValue = analogRead(analogPin);
  if((aValue >0)&&(millis()-lastValue >= Time)){
    if((aValue > (925-threshold))&&(aValue < (925+threshold)))
    key = KEY_1;
    if((aValue > (907-threshold))&&(aValue < (907+threshold)))
    key = KEY_2;
    if((aValue > (890-threshold))&&(aValue < (890+threshold)))
    key = KEY_3;
    if((aValue > (873-threshold))&&(aValue < (873+threshold)))
    key = KEY_A;
    if((aValue > (849-threshold))&&(aValue < (849+threshold)))
    key = KEY_4;
    if((aValue > (834-threshold))&&(aValue < (834+threshold)))
    key = KEY_5;
    if((aValue > (819-threshold))&&(aValue < (819+threshold)))
    key = KEY_6;
    if((aValue > (805-threshold))&&(aValue < (805+threshold)))
    key = KEY_B;
    if((aValue > (784-threshold))&&(aValue < (784+threshold)))
    key = KEY_7;
  }
  }
}
