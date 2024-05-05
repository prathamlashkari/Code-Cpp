#include <iostream>
using namespace std;

class shop
{
    int id;
    int price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The id of the item is: " << id << endl;
        cout << "The price of the item is: " << price << endl;
    }
};
int main()
{

    int p,size = 3;
    float q;
    shop *pr = new shop[size];
    shop *temp = pr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the data of the item: " << i + 1<<endl;
        cin >> p >> q;
        // (*pr).setdata(p, q);
        pr->setdata(p, q);
        pr++;
    }
    for (int i = 0; i <size ; i++)
    {
        cout<<"The item no is: "<<i+1<<endl;
        temp->getdata();
        temp++;
    }
    

    return 0;
}
/* we use two pointer becaue after first for loop pointer is increment at the end 
and the point to another pointer or array so we made temp which was eaqual to the first
pointer and point for printitng the  loop */