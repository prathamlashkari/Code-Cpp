#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    //  Fucintion objects: function wrapped in a classs so that it available like object
    int arr[] = {2, 5, 4, 1, 34, 8};
    sort(arr, arr + 5);
    sort(arr, arr + 6 , greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<endl;
    }

    return 0;
}