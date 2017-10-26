#include <iostream>
#include "Fraction.h"

using namespace std;

void relational()
{
    Fraction c(2,3);
    Fraction b(3,4);
    if(c<b)
        cout<<c<<"smaller than"<<b<<endl;
    if(c<=b)
        cout<<c<<"smaller than"<<b<<endl;
    if(c>=b)
        cout<<c<<"bigger or equal than"<<b<<endl;
    if(c>b)
        cout<<c<<"bigger than"<<b<<endl;
    c=b;
    if(c!=b)
        cout<<"they are different"<<endl;
    if(c==b)
        cout<<"they are the same"<<endl;
}
