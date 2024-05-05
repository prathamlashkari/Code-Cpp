//  Array of object
#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 100;
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of the employee is " << id << endl;
    }
};

int main()
{
    // employee yash;
    // yash.setid();
    // yash.getid();

    employee fb[5];
    for (int i=0 ; i<5 ; i++)
    {
        fb[i].setid();
        fb[i].getid();

    }

    return 0;
}