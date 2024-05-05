#include <iostream>
using namespace std;

class base{
    protected:
    int baseint1;
    public:
    void setbaseint1(int a)
    {
        baseint1 = a ;
    }
};
class base2{
    protected:
    int baseint2;
    public:
    void setbaseint2(int a){
        baseint2 = a ;
    }
    
};
class base3{
    protected:
    int baseint3;
    public:
    void setbaseint3(int a){
        baseint3 = a ;
    }
    
};

class deriev : public base, public base2,public base3{
    public:
    void show()
    {
        cout<<"The value of the base1 is "<<baseint1<<endl;
        cout<<"The value of the base2 is "<<baseint2<<endl;
        cout<<"The value of the base3 is "<<baseint3<<endl;
        cout<<"The sum of the bases is "<<baseint1 + baseint2 + baseint3<<endl;

    }
};
int main()
{
    deriev p ;
    p.setbaseint1(33);
    p.setbaseint2(35);
    p.setbaseint3(67);
    p.show();

    return 0;
}