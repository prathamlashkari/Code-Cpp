#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the id of our item no" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item no " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukkan;
    dukkan.initcounter();

    for (int j = 1; j < 4; j++)
    {
        dukkan.setprice();
    }
    dukkan.displayprice();

    return 0;
}