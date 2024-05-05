#include <iostream>
#include <fstream>
using namespace std;

int main (){
    string s = "Toh kaise hai app log" ;
    string st ;
    // //  opening file using constructor and writening in it
    // ofstream out("text60.txt");
    // out<<s;

    //  opening file using constructor and reading in it
    ifstream in("text61.txt");
    // in>>st;
    getline(in,st);
    cout<<st;

    return 0;
}