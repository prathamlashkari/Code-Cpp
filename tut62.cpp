#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // ofstream hout;
    // hout.open("tue61.txt");
    // hout<<"This is me \n";
    // hout<<"This is me also ";
    // hout.close();

    ifstream in;
    string st;
    in.open("tue61.txt");
    // in>>st;
    // cout<<st;

    while(in.eof() == 0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}