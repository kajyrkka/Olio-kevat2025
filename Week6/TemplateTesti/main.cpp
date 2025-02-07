#include <iostream>

using namespace std;

template <typename T> T add(T a, T b)
{
    return a+b;
}

int main()
{
    cout << "Hello World!" << endl;

    int a = 1;
    int b = 2;
    int c = add(a,b);
     cout << "Tulos =" <<c<< endl;
    string aa = "jippii";
    string bb = " nainkin";
    string tulos = add(aa,bb);
    cout << "Tulos =" <<tulos<< endl;
    return 0;
}
