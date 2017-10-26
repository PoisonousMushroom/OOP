#include <math.h>
#include <iostream>
#include "Fraction.h"



Fraction::Fraction(const Fraction& a)
{
    sub=a.sub;
    sup=a.sup;
}

Fraction::~Fraction()
{

}

int Fraction::reduce(int a, int b)
{
    int q=a;
    int w=b;
    int d=1;
    while(q%2==0&&w%2==0)
    {
        d*=2;
        q/=2;
        w/=2;
    }
    for(int i=3;i<=std::min(q,w)&&q!=1&&w!=1;i+=2)
    {
        while(q%i==0&&w%i==0)
        {
            d*=i;
            q/=i;
            w/=i;
        }
    }
    return d;
}

Fraction::Fraction(int a, int b)
{
    sup=a;
    if(b==0)
        throw "Invalid data or logical error";
    sub=b;
    int f=reduce(sup,sub);
    sup/=f;
    sub/=f;
}

Fraction::Fraction(std::string s)
{
    int i=0;
    sup=0;
    sub=0;
    if(s[0]=='-')
    {
        i++;
        while(s[i]!='/')
        {
            sup=sup*10+(s[i]-'0');
            i++;
        }
        i++;
        while(s[i]!='\0')
        {
            sub=sub*10+(s[i]-'0');
            i++;
        }
        sup*=-1;
    }
    else
    {
        while(s[i]!='/')
        {
            sup=sup*10+(s[i]-'0');
            i++;
        }
        i++;
        while(s[i]!='\0')
        {
            sub=sub*10+(s[i]-'0');
            i++;
        }
    }
    if(sub==0)
    {
        throw "Invalid data or logical error";
    }
    int f=this->reduce(sup,sub);
    sup/=f;
    sub/=f;
}
