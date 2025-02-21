#include <iostream>
using namespace std;

template <typename T> T add(T a, T b)
{
    return a+b;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = add(a,b);
    cout << "Tulos integereilla = " <<c<< endl;
    string teksti1 = "Toimii muuten";
    string teksti2 = " nainkin";
    string tulos = add(teksti1,teksti2);
    cout << "Tulos stringeilla = " <<tulos<< endl;
    return 0;
}
