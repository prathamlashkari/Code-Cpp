#include <iostream>
using namespace std;

class base1{
       public:
       void show(){
        cout<<"How are you "<<endl;
       }
};

class base2{
    public:
       void show(){
        cout<<"kasie ho "<<endl;
       }
};

class derived : public base1 , public base2{
    int a ;
    public :
    void show(){
        base1::show();
    }
};
int main()
{ 
    base1 b1;
    base2 b2;
    derived d1 ;
    //b1.show();
    //b2.show();
   // d1.show();


    return 0;
}