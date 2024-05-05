// program to show the working of destructor
#include <iostream>
using namespace std;

class A
{

public:
    A() // consturctor 
    {
        cout << "constructor called" << endl;
    }
    ~A()  // destructor. (~) this is compliment sing used as destructor
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    A ob1;
    // constructor called for object 1
    // destructor called for object 1
}