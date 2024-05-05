// static variable
//  static  variable is written in out of class
// we can not pass count of employe from one object to another object

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id of the employee " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of the emplyee is " << id << " and the number of employee is " << count << endl;
    }
};

int employee ::count; // default value is zero

int main()
{
    employee yash, pratham, rash;
    yash.setdata();
    yash.getdata();

    pratham.setdata();
    pratham.getdata();

    rash.setdata();
    rash.getdata();

    return 0;
}