#include <iostream>
using namespace std;

class bank
{
    int principal;
    int year;
    float rate;
    float returnvalue;

public:
    bank() {} // necessary to make a void constructor so complier can find whihc one want to use
    bank(int p, int y, float r); // r can be value of like 0.04
    bank(int p, int y, int r);   // r can be value of like 14
    void show();
};

bank ::bank(int p, int y, float r)
{
    principal = p;
    year = y;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}

bank ::bank(int p, int y, int r)
{
    principal = p;
    year = y;
    rate = float (r)/100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
void bank :: show()
{
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<year
        << " years is "<<returnvalue<<endl;
}

int main()
{
    bank bd1, bd2;

    int p , y ;
    float r;
    int R;

    cout <<"Enter the value of p , y and r"<<endl;
    cin>>p>>y>>r;
    bd1= bank(p , y , r);
    bd1.show();

    cout <<"Enter the value of p , y and R"<<endl;
    cin>>p>>y>>R;
    bd2= bank(p , y , R);
    bd2.show();


     return 0;
}