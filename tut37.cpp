#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata()
{
    data1 = 88;
    data2 = 77;
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "The value of the getdata1 is" << getdata1() << endl;
    cout << "The value of the data2 is " << data2 << endl;
    cout << "The value of the data3 is " << data3 << endl;
}
int main()
{

    derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}