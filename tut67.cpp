#include <iostream>
using namespace std;

template <class p, class r>
float avg(p a, r b)
{
    float avge = (a + b) / 2.0;
    return avge;
}
template <class n>
void swapp(n &a, n &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    float a;
    a = avg(6.5, 5.0);
    cout << "The average is: " << a << endl;
    int x  = 99 , y =88 ;
    swapp(x,y);
    cout<<"The value of x: "<<x<<endl;
    cout<<"The value of y: "<<y<<endl;
    return 0;
}