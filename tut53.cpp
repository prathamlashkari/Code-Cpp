#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A & setdata(int a)
    void setdata(int a)
    {
        this->a = a;
        //    return *this;
    }
    void getdata()
    {
        cout << "The value of a is: " << a << endl;
    }
};

int main()
{

    A a;
    a.setdata(44);
    a.getdata();
    // a.setdata(55).getdata();
    return 0;
}

/*  This is a keyword which is a pointer which points to the object which is being created

(A & setdat(int a)) this type is used to return the data of the object
reutnr *this;
*/