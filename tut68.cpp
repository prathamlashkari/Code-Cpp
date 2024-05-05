#include <iostream>
using namespace std;
template <class t>

class yash
{
public:
    t data;
    yash(t a)
    {
        data = a;
    }
    void display();
};

template <class p>
void yash<p>::display()
{
    cout << data << endl;
}

// void func(int a){
//     cout<<"I am func() "<<a<<endl;
// }

template  <class g>
void func(g a){
    cout<<"I am templazied func() "<<a<<endl;
}

template  <class e>
void func1(e a){
    cout<<"I am templazied func1() "<<a<<endl;
}



int main()
{

    // yash<int> op(6);
    // yash<char> op('p');
    // yash<float> op(6.5);
    // cout << op.data << endl;
    // op.display();


    // func(5); // Exact mathc takes the highest priority.
    func(4);

    
    return 0;
}