#include "TimerOne-master\TimerOne.h"
#include "S8x8_Lib.h"
#include "Animate.h"

int num = '0';
//===============================================================================================================================
void setup() {
  S8x8Setup();
  Serial.begin(9600);

  DisplayChar(num);
}
//===============================================================================================================================
void loop() {
  if (digitalRead(pb1Pin) == 1) {
    num++;
    if (num > 57) num=57; //9
    DisplayChar(num);
    while (digitalRead(pb1Pin) == 1);
  } 
  if (digitalRead(pb2Pin)==1){
    num--;    
    if (num < 48) num = 48; //0
    DisplayChar(num);
    while (digitalRead(pb2Pin) == 1);
  }  
}
//===============================================================================================================================







