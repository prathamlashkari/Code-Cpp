#include <iostream>
using namespace std;

class simcalcu
{
public:
    int a, b;
    char p;
    void getvalue()
    {
        cout << "Enter the value a: " << endl;
        cin >> a;
        cout << "Enter the value b: " << endl;
        cin >> b;
        cout << "Choose an operator" << endl;
        cin >> p;
    }
    void operation()
    {
        switch (p)
        {
        case '+':
            cout << "The additon of the number is: " << a + b << endl;
            break;
        case '-':
            cout << "The substraction of the number is: " << a - b << endl;
            break;
        case '*':
            cout << "The Multiplication of the number is: " << a * b << endl;
            break;
        case '/':
            cout << "The Division of the number is: " << a / b << endl;
            break;
        default:
            cout << "Error! operator is not correct";
            break;
        }
    }
};


int main()
{
    simcalcu d;
    d.getvalue();
    d.operation();
    return 0;
}