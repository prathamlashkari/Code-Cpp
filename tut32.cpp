#include <iostream>
using namespace std;

class simple {
    int data1 ,data2 ,data3;
    public :

    simple(int a , int b = 9,int c=8)
    {
        data1 = a ;
        data2 = b ;
        data3 = c ;
    }
    void printdata();

};

void simple :: printdata(){
    cout<<"The valud of data1 = "<<data1<<" and data2 = "<<data2<<" and data3 = "<<data3<<endl;
}


int main()
{
    simple s(2,3);
    s.printdata();
    /* if we pass only one value it print only default value which was given
    in the function*/
    simple f(5);
    f.printdata();
    simple d(5 ,6,7);
    d.printdata();
    return 0;
}