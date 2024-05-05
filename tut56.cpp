#include <iostream>
using namespace std;

class base
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying the variable of the base classes: " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying the variable of the Base classes: " << var_base<< endl;
        cout << "Displaying the variable of the derived classes: " << var_derived << endl;
    }
};
int main()
{
    base * ptr ;
    base ob ;
    derived od;
    ptr = &od;
    ptr->display();
    return 0;
}