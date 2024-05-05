#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "The real value is: " << real << endl;
        cout << "The imaginary value is: " << imaginary << endl;
    }
};
int main()
{

    // complex c1;
    // // c1.setdata(44, 55);
    // // c1.getdata();
    // // complex *ptr = &c1;
    // complex *p = new complex;
    // // (*p).setdata(44,77); // or you can use arrow operator.
    // // (*p).getdata();
    // // arrow operator.
    // p->setdata(88,9);
    // p->getdata();
    return 0;
}
    // (*p).setdata(44,77); // or you can use arrow operator.
    // p->setdata(88,9); you can use arrow also do same work looks good.