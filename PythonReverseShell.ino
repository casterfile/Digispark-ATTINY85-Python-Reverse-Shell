#include "DigiKeyboard.h"
void setup() 
{
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.println("python ");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.println("Paste the python code here");
  
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("quit()");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");

}


void loop() 
{

 // DigiKeyboard.println("Welcome to Green Terminal ! ");
 // DigiKeyboard.sendKeyStroke(KEY_ENTER);
 // DigiKeyboard.delay(5000);
}


