#include <iostream>
#include <fstream>
using namespace std;


int main(){
    // connection our file with hout stream:
    // ofstream yout("tue61.txt");
    // //  creating a name string and filling it with the string entered by the users.
    // cout<<"Enter your name: ";
    // string name;
    // cin>>name;
     // writing a string to this file.
    // yout<<"My name is " + name;
    // yout.close();

    ifstream in("tue61.txt");
    string content ;
    in>>content;
    cout<<"The content is: "<<content;

    return 0;
}