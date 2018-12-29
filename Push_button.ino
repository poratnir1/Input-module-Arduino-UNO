#include "Wire.h"
#include <Pushbutton.h>
#define First_Chanel 1
#define Last_Chanel 17
#define Delay_Time 100
/** the current address in the EEPROM (i.e. which byte we're going to write to next) **/



//=========================================Variables Declerations=======================================================

int Switch_Array[Last_Chanel-First_Chanel+1] = {2,3,4,5,6,7,8,9,10,11,12,14,15,16,17,18,19};//Array to define GPIO numbers of the switch button
// D13 is used for LED and cannot be used as input
//A6,A7 cannot be used as inputs

String Chanel_Number,Chanel_Command;
//======================================================================================================================

//================================================Push buttons settings=================================================
Pushbutton button1(Switch_Array[0]);
Pushbutton button2(Switch_Array[1]);
Pushbutton button3(Switch_Array[2]);
Pushbutton button4(Switch_Array[3]);
Pushbutton button5(Switch_Array[4]);
Pushbutton button6(Switch_Array[5]);
Pushbutton button7(Switch_Array[6]);
Pushbutton button8(Switch_Array[7]);
Pushbutton button9(Switch_Array[8]);
Pushbutton button10(Switch_Array[9]);
Pushbutton button11(Switch_Array[10]);
Pushbutton button12(Switch_Array[11]);
Pushbutton button13(Switch_Array[12]);
Pushbutton button14(Switch_Array[13]);
Pushbutton button15(Switch_Array[14]);
Pushbutton button16(Switch_Array[15]);
Pushbutton button17(Switch_Array[16]);



//=========================================================setup=======================================================
void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<(Last_Chanel-First_Chanel+1); i++) {
       pinMode(Switch_Array[i], INPUT);
  }
    Serial.begin(19200);
    delay(100);
    Serial.println("Idle");
}



//===============================End Function==================================================================

//=========================================Check push buttons==================================================
 void check_buttons()
{
  //==================================button 1=========================================
             if (button1.getSingleDebouncedRelease())
            {
             Serial.println("1");
             delay( Delay_Time);
             Serial.println("0");

            }
            
  //==================================button 2=========================================
             if (button2.getSingleDebouncedRelease())
            {
             Serial.println("2");
             delay( Delay_Time);
             Serial.println("0");
            }
  //==================================button 3=========================================
                 if (button3.getSingleDebouncedRelease())
            {
             Serial.println("3");
             delay( Delay_Time);
             Serial.println("0");
            }
 //==================================button 4=========================================
                 if (button4.getSingleDebouncedRelease())
            
            {             
             Serial.println("4");
             delay( Delay_Time);
             Serial.println("0");
            }
 //==================================button 5=========================================
             if (button5.getSingleDebouncedRelease())
                 
            {
             
             Serial.println("5");
             delay( Delay_Time);
             Serial.println("0");
            }
//==================================button 6=========================================
                 if (button6.getSingleDebouncedRelease())
                 
            {                          
             Serial.println("6");
             delay( Delay_Time);
             Serial.println("0");
            }
 //==================================button 7=========================================
                 if (button7.getSingleDebouncedRelease())
            {
             Serial.println("7");
             delay( Delay_Time);
             Serial.println("0");
            }
//==================================button 8=========================================
                 if (button8.getSingleDebouncedRelease())
            {
             Serial.println("8");
             delay( Delay_Time);
             Serial.println("0");
            }
//==================================button 9=========================================
                 if (button9.getSingleDebouncedRelease())
            {
             Serial.println("9");
             delay( Delay_Time);
             Serial.println("0");
            }
  //==================================button 10=========================================
                  if (button10.getSingleDebouncedRelease())
            {
             Serial.println("10");
             delay( Delay_Time);
             Serial.println("0");
            }
  //==================================button 11=========================================
                 if (button11.getSingleDebouncedRelease())
            {
             Serial.println("11");
             delay( Delay_Time);
             Serial.println("0");
            }
 //==================================button 12=========================================
                 if (button12.getSingleDebouncedRelease())
            {
             Serial.println("12");
             delay( Delay_Time);
             Serial.println("0");
            }
//==================================button 13=========================================
                 if (button13.getSingleDebouncedRelease())
                
            {
             Serial.println("13");
             delay( Delay_Time);
             Serial.println("0");
            }
 //==================================button 14=========================================
                 if (button14.getSingleDebouncedRelease())
                 
            {
             Serial.println("14");
             delay( Delay_Time);
             Serial.println("0");
            }
 //==================================button 15=========================================
                 if (button15.getSingleDebouncedRelease())
            {
             Serial.println("15");
             delay( Delay_Time);
             Serial.println("0");
            }
 //==================================button 16=========================================
                 if (button16.getSingleDebouncedRelease())
            {
             Serial.println("16");
             delay( Delay_Time);
             Serial.println("0");
            }
//==================================button 17=========================================
                 if (button17.getSingleDebouncedRelease())
            {
             Serial.println("17");
             delay( Delay_Time);
             Serial.println("0");
            }

            return;
        }
 //===============================End Function==================================================================

//=========================================Main================================================================

void loop() {


check_buttons();





}
