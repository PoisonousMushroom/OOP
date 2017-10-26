#include <iostream>
#include "Fraction.h"

using namespace std;

void ios()
{
    try
    {
        Fraction c;
        cin>>c;
        cout<<c;
    }
    catch(const char* str)
    {
        cout<<str<<endl;
    }
}
