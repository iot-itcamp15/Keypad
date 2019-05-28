/* Keypad
การต่อขาใน keypad
ขาในบอร์ด    D2 D3 D4 D5 D6 D7 D8
ขาใน Keypad 7  6  5  4  3  2  1
*/
#include <Keypad.h>

const byte ROWS = 4; //4 แถว
const byte COLS = 3; //3 หลัก
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {D2, D3, D4, D5}; //เชื่อมต่อแถว ขาที่จะส่งค่าไปยัง keypad
byte colPins[COLS] = {D6, D7, D8}; //เชื่อมต่อหลัก ขาที่จะส่งค่าไปยัง keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char key = keypad.getKey();
  
  if (key){
    Serial.println(key);
  }
}
