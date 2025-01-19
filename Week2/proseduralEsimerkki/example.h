#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <iostream>

using namespace std;

struct rectangle
{
    string type;    //rectangle
    int x;          //lower left corner x
    int y;          //lower left corner y
    int width;
    int height;
};

struct circle
{
    string type;    //rectangle
    int x;          //center x
    int y;          //center y
    int radius;
};

rectangle create_rectangle(string,int,int,int,int);
circle create_circle(string,int,int,int);
int calculate_rectangle_area(rectangle);
int calculate_circle_area(circle);

// KYSYMYS, miten tekisit yhden funktion, jolla voitaisiin laskea niin
// suorakaiteen kuin ympyränkin ala? Siis mitä parametreja tuolle
// funktiolle tulee välittää?


#endif // EXAMPLE_H
