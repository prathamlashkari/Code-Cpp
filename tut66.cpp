//  Templates with default arguments and parameters.
#include <iostream>
using namespace std;

template <class p = int ,class r = float, class s=char>

class my{
    public:
    p a ;
    r b ;
    s c ;
    my(p x , r y,s z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
    }
};
int main(){

    // my <>ob(5,5.6,'d');
    // ob.display();

     my <float ,char , int>ob(5.6,'p',5);
    ob.display();

    return 0;
}