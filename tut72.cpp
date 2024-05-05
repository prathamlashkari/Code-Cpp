#include <iostream>
#include <list>
using namespace std;

void display(list<int> &ls)
{
    list<int>::iterator it;
    for (it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst; // List of lenght 0.
    lst.push_back(5);
    lst.push_back(4);
    lst.push_back(3);
    lst.push_back(7);
    lst.push_back(2);
    display(lst);

    // lst.sort(); can sort the list

    // Removing elements from the list.
    // lst.pop_back(); // poped element form the back of the list.
    // lst.pop_front(); // poped element form the front of the list.
    // lst.remove(3); // Removed the value of the list.
    display(lst);

    list<int> list2(4); // empty list of lenght 4
    list<int>::iterator it;
    it = list2.begin();
    *it = 90;
    it++;
    *it = 34;
    it++;
    *it = 54;
    it++;
    *it = 23;
    it++;
    display(list2);
    lst.merge(list2);
    cout << "List 1 after merging: ";
    display(lst);
    display(list2);

    //  Reversing the list 
        lst.reverse();
        display(lst);
        return 0;
}