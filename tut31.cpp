//  Constructor  overloading
#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex (){
        a = 0 ;
        b = 0 ;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c(4, 5);
    c.printNumber();

    complex d(3);
    d.printNumber();

    complex e;
    e.printNumber();

    return 0;
}