/*
CH08-320143
a5_p3.cpp
Oana Miron
o.miron@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Motor
{
public:
    Motor(){throw "This motor has problems";};
    ~Motor(){};
};

class Car
{
private:
    Motor* a;
public:
    Car(){
        Motor *a=new Motor();
        a->~Motor();
    };
    ~Car(){};
};

class Garage
{
private:
    Car* a;
public:
    Garage(){
        try{
            Car *a=new Car();
            a->~Car();
        }
        catch(const char *str)
        {
            cout<<str<<endl;
        }
        throw "The car in this garage has problems with the motor.";
        };
    ~Garage(){};
};

int main()
{
    try{
       Garage g;
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}
