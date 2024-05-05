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
    base *base_point;
    base obj_base;
    derived obj_derived;
    base_point = &obj_derived; // Pointing base class pointer to derived class
    base_point->var_base = 44;
    // base_point->var_derived = 144; // will throw an error
    base_point->display();

    derived * derived_point ;
    derived_point = &obj_derived;
    derived_point->var_base = 4644;
    derived_point->var_derived = 990;
    derived_point->display();
    return 0;
}