#ifndef LCD_H
#define LCD_H
#include <iostream>
using namespace std;


class LCD
{
public:
  LCD ();
  ~LCD();
  void begin();
  void print(string);
  string floatToString(float);

private:
  string text;

};

#endif // LCD_H
