#include <iostream>
#include "Fraction.h"

using namespace std;

void arithmetic()
{
    Fraction a(2,3);
    Fraction b(3,4);
    Fraction c=a+b;
    cout<<"a+b="<<c;
    c=a-b;
    cout<<"a-b="<<c;
    c=a*b;
    cout<<"a*b="<<c;
    c=a/b;
    cout<<"a/b="<<c;
    c=b;
    cout<<"b="<<c;
}
