#include <iostream>
#include <vector>
using namespace std;

template <class t>  
void display(vector<t> &ve)
{   cout<<"Displaying the vector: "<<endl;
    for (int i = 0; i < ve.size(); i++)
    {
        cout << ve[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vector<int> vec; // Zero length vector.
    // int elements, size;
    // cout << "Enter  size of the vector: " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the elements : " << endl;
    //     cin >> elements;
    //     vec.push_back(elements);
    // }
    // // vec.pop_back(); pop the last element of the vector.
    // display(vec);
    // vector<int>::iterator iter = vec.begin();
    // // points at the begining of vecotr.
    // vec.insert(iter + 1, 4, 99);
    // // add elements to the 2 position because of iter+1.
    // // also insert multiple copies of the element like  ,4,
    // display(vec);

    vector<char> vec2(5) ; // 5-element character vector.
    // vec2.push_back('5');
    // display(vec2);

    // vector<char> vec3(vec2); // 5-element character vector from vector 2.
    // display(vec3);
    
    vector<int> vec4(6 , 19); // 6 Element of the vector is 3s.
    display(vec4);
        return 0;
}