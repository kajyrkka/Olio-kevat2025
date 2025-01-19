#include "example.h"
rectangle create_rectangle(string t,int x,int y,int w,int h)
{
    rectangle foo;
    foo.type = t;
    foo.x = x;
    foo.y = y;
    foo.width = w;
    foo.height = h;

    return foo;
}
circle create_circle(string t,int x,int y,int r)
{
    circle bar;
    bar.type = t;
    bar.x = x;
    bar.y = y;
    bar.radius = r;
    return bar;
}
int calculate_rectangle_area(rectangle r)
{
    int a = r.height * r.width;
    return a;
}

int calculate_circle_area(circle c)
{
    int a = 3.14 * (c.radius)*(c.radius);
    return a;
}
