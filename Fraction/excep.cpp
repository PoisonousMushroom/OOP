#include <iostream>
#include "Fraction.h"

using namespace std;

void excep()
{
    try
    {
        Fraction a(1,0);
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    try
    {
        Fraction a(2,3);
        cout<<a;
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    try
    {
        Fraction b("1/0");
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    try
    {
        Fraction b("1/2");
        cout<<b;
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    try
    {
        Fraction c;
        cin>>c;
        cout<<"Input was valid"<<endl;
    }
    catch(const char* str)
    {
        cout<<str<<endl;
    }
}
