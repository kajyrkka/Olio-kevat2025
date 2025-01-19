#include <iostream>
using namespace std;
#include "rectangle.h"
#include "circle.h"

int main()
{

    Rectangle r(4,5);
    Circle c(4);
    cout << "Rectangle area = " << r.area() << endl;
    cout << "Circle area = " << c.area() << endl;

    return 0;
}
