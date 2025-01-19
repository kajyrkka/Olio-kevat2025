#include "circle.h"


Circle::Circle(int r)
{
    cout<<"Creating circle..."<<endl;
    type = "Circle";
    x = 0; // default setting
    y = 0; // default setting
    radius = r;
}

int Circle::area()
{
    return 3.14 * radius * radius;
}
