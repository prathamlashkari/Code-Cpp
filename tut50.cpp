#include <iostream>
using namespace std;

int main()
{
    //  Basic example of pointers.
    // int a = 4 ;
    // int * ptr = &a;
    // cout<<"The value of a is "<<*(ptr)<<endl;

    // // New keyword progpram
    // // int *p = new int(5);
    // float *p = new float(5.45);
    // cout<<"The value at address p is: "<<*(p)<<endl;

    // Making array dynamically
    int *arr = new int[4];
    arr[0] = 45 ;
    *(arr+1) = 54 ;
    arr[2] = 43 ;
    arr[3] = 34 ;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"Enter the elements of the array: "<<endl;
    //     cin >> arr[i];
    // }
    // delete[] arr ; // used to free the array using delete function.
    for (int i = 0; i < 4; i++)
    {
        cout << "The elements of array are: " << arr[i] << "\n";
    }

    return 0;
}