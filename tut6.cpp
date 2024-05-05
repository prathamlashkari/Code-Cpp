#include <iostream>
using namespace std ; 
//  "endl" is used to jump in new line 
int main()
{
    int a=66 , b=33 ;
    cout<< "Operator in c++: "<<endl ;
    cout<< "Following are the opertaor in c++: "<<endl;
    // Arithmetic operator are +,-,*,/,++,--,%
    cout<< " the addition of a and b is:"<<a+b<<endl;
    cout<< " the sub of a and b is:"<<a-b<<endl;
    cout<< " the mul of a and b is:"<<a*b<<endl;
    cout<< " the div of a and b is:"<<a/b<<endl;
    cout<< " the value of a%b is:"<<a%b<<endl;
    cout<< " the value of a++ is:"<<a++<<endl;
    cout<< " the value of a-- is:"<<a--<<endl;
    cout<< " the value of --a is:"<<--a<<endl;
    cout<< " the value of ++a is:"<<++a<<endl;
    cout<<endl;

    cout<<"Folling out put show the comparision operator";

    cout<<"the valus a == b : "<<(a==b)<<endl;
    cout<<"the valus a != b : "<<(a!=b)<<endl;
    cout<<"the valus a >= b : "<<(a>=b)<<endl;
    cout<<"the valus a <= b : "<<(a<=b)<<endl;
    cout<<"the valus a > b : "<<(a>b)<<endl;
    cout<<"the valus a < b : "<<(a<b)<<endl;

    // Logical operator 
    cout<<"the valus a != b : "<<((a==b) && (a<b))<<endl;
    cout<<"the valus a != b : "<<((a==b) ||  (a<=b))<<endl;
    cout<<"the valus a != b : "<<(!(a==b))<<endl;




}