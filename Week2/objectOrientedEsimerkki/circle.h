#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <iostream>
using namespace std;

class Circle:public Shape
{
public:
    Circle(int);
    virtual int area() override;
private:
    string type;
    int x;
    int y;
    int radius;
};

#endif // CIRCLE_H
