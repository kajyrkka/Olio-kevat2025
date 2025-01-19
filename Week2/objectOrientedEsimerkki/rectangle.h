#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include <iostream>
using namespace std;

class Rectangle:public Shape  // peritään shape luokasta area metodi
{
public:
    Rectangle(int,int);
    virtual int area() override;

private:
    string type;
    int x;
    int y;
    int width;
    int height;
};

#endif // RECTANGLE_H
