#include <iostream>
using namespace std;

template <class p, class r>

class myclass
{
public:
    p data1;
    r data2;
    myclass(p a, r b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << endl
             << data2;
    }
};
int main()
{
    myclass<float, int> o(4.4,9);
    o.display();

    return 0;
}