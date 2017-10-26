#include <iostream>
#include <string>
#ifndef F
#define F
class Fraction
{
private:
    int sup;
    int sub;
public:
    Fraction(){sup=0;sub=1;};
    Fraction(int a, int b);
    Fraction(std::string s);
    bool operator<(const Fraction& a)
    {
    if(sup*a.sub<sub*a.sup)
        return 1;
    return 0;
    }
    bool operator<=(const Fraction& a)
    {
    if(sup*a.sub<=sub*a.sup)
        return 1;
    return 0;
    }
    bool operator>(const Fraction& a)
    {
    if(sup*a.sub>sub*a.sup)
        return 1;
    return 0;
    }
    bool operator>=(const Fraction& a)
    {
    if(sup*a.sub>=sub*a.sup)
        return 1;
    return 0;
    }
    void operator=(const Fraction& a)
    {
    sup=a.sup;
    sub=a.sub;
    }
    bool operator==(const Fraction& a)
    {
    if(sup*a.sub==sub*a.sup)
        return 1;
    return 0;
    }
    bool operator!=(const Fraction& a)
    {
    if(sup*a.sub!=sub*a.sup)
        return 1;
    return 0;
    }
    Fraction operator*(const Fraction& a)
    {
    int f=reduce(a.sup*sup,a.sub*sub);
    Fraction c(a.sup*sup/f,a.sub*sub/f);
    return c;
    }
    Fraction operator/(const Fraction& a)
    {
    if(sub==0||a.sup==0)
        throw "Invalid data or logical error";
    int f=reduce(a.sub*sup,a.sup*sub);
    Fraction c(a.sub*sup/f,a.sup*sub/f);
    return c;
    }
    Fraction operator+(const Fraction& a)
    {
    int f=reduce(a.sup*sub+sup*a.sub,a.sub*sub);
    Fraction c((a.sup*sub+sup*a.sub)/f,a.sub*sub/f);
    return c;
    }
    Fraction operator-(const Fraction& a)
    {
        int f=reduce(a.sub*sup-sub*a.sup,a.sub*sub);
        Fraction c((a.sub*sup-sub*a.sup)/f,a.sub*sub);
        return c;
    }
    friend std::istream& operator>>(std::istream& in, Fraction& a)
    {
    in>>a.sup>>a.sub;
    if(a.sub==0)
        throw "Invalid data or logical error";
    return in;
    }
    friend std::ostream& operator<<(std::ostream& o, Fraction& a)
    {
    o<<a.sup<<"/"<<a.sub<<std::endl;
    return o;
    }
    int reduce(int a, int b);
    Fraction(const Fraction& a);
    ~Fraction();
};

#endif //F
