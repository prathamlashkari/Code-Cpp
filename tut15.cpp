#include <iostream>
using namespace std;

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c;
    c = a + b;
    return c;
}
//  Function prototype
//  Type function name arguments
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable
// int sum(int, int); //--> Acceptable
 void g(void); //--> Acceptable
// void g(); //--> Acceptable

int main()
{

    int n1, n2;
    cout << "Enter the n1; " << endl;
    cin >> n1;
    cout << "Enter the n2; " << endl;
    cin >> n2;
    // num1 and num2 are actual parameters
    cout << "The additon of n1 and n2 is: " << sum(n1, n2) << endl;
    g();
    return 0;
}

void g(){
    cout<<"\n Good morning";
}