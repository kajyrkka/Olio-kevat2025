#include <iostream>
#include "example.h"
using namespace std;



int main()
{
    rectangle r = create_rectangle("Rectangle",0,0,4,5);
    circle c = create_circle("Circle",0,0,4);

    cout<<"Rectangle area = " << calculate_rectangle_area(r) << endl;
    cout<<"Circle area = " << calculate_circle_area(c)<< endl;
    return 0;
}
