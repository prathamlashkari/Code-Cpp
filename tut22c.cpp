#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void che_bin(void);
    void once(void);
    void display(void);
};

void binary ::once(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Display your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void binary ::read(void)
{
    cout << "Enter the binary number" << endl;
    cin >> s;
}

void binary ::che_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number";
            exit(0);
        }
    }
}
int main()
{
    binary b;
    b.read();
    b.che_bin();
    b.display();
    b.once();
    b.display();
}