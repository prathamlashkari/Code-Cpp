//  Copy constructor
#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {
        a = 0 ;
    }
    number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }
    void dis()
    {
        cout << "The number of obj is  " << a << endl;
    }
};

int main()
{
    number x, y, z(45) , z2;
    x.dis();
    y.dis();
    z.dis();
    number z1(z); // Copy constructor invoked
    z1.dis();

    z2 = z; // Copy constructor not called
    z2.dis();

    number z3 = z; // Copy constructor invoked
    z3.dis();

    // z1 should exactly resemble z  or x or y

    return 0;
}