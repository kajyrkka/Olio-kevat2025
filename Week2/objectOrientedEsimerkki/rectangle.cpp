#include "rectangle.h"

Rectangle::Rectangle(int w, int h)
{
    cout<<"Creating rectangle..."<<endl;
    width = w;
    height = h;
    x = 0;  // default setting
    y = 0;  // default setting
    type = "rectangle";

}

int Rectangle::area()
{
   return width*height;
}
