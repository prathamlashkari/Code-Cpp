#include <iostream>
using namespace std;

class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j) // adding the value of the i and j to the b.
    // test(int i, int j) : a(i), b(2 * j)
    test(int i, int j) : b(j),a(i+b) // create a  problem because we intialize the a first.
    {
        cout << "The constructor is excuted" << endl;
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};
int main()
{
    test t(30, 70);
    return 0;
}