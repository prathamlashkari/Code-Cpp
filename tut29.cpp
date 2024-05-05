#include <iostream>
using namespace std;

class complex
{
    int a , b ;
    public :
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
    complex(void);
    void printnum(){
        cout<<"The number is "<< a<<" and "<< b <<endl;
    }

};

complex :: complex(){ //----> This is a default constructor as it takes no parameters
    a = 10 ;
    b = 5 ;

}
int main ()
{

    complex c1 ;
    c1.printnum();
    return 0 ;
}

/* characteristics of constructor 

1. It should be declared in the public secton of the class
2. They are automatically invoked whenever the object is created
3. They can not return valued and not have return types
4. It can have default arguement 
5. we can not refer to their address

*/