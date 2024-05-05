#include <iostream>
using namespace std;

class complex
{
    int a , b ;
    public :
    complex(int x , int y);
    void printnum()
    {
        cout<<"the number are "<<a << " and "<< b << endl ;
    }

};

complex :: complex(int x , int y) //  -> This is a parameterized constructor as it takes 2 parameters
{
    a = x ;
    b = y ;
}

int main()
{ 
    // Implict call
    complex a(4,5) ;
    //  Exolict call
    complex b = complex(6,7);
    a.printnum();
    b.printnum();

    return 0;
}