#include<iostream>
using namespace std;

class base{
    protected: // protected data can be inherit and private cant.
    int a;
    private:
    int b;
};
class deriv: protected  base{

};
 /*modifiers when they are derived “public”, “private”, and “protected”.

                        Public Derivation      	Private Derivation    	Protected Derivation    
Private members           Not Inherited              Not Inherited            Not Inherited              
Protected members          Protected                   Private                Protected                    
Public members              Public	                  Private                 Protected      */ 


int main(){ 
    
    base de;
    deriv df;
    // cout<<de.a;
    // cout<<df.a; will not work becaouse its was protcetd in both the classes 

    return 0;
}