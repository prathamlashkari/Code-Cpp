// #include <iostream>
// using namespace std;

//  it increase the time of runnig code 
// and replace the product wiht return value direct so it take less time to execute
//  Static variable is used to initialize the line only one time

// inline int product(int x, int y)
// {     // not recommended to use this function with below line of code
//     // static int c = 0  ; // this excutes only one time
//     // c =c+1;  // This is run and it reatin the value of c
//     // return x * y + c;]
//     return x*y ;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a and b " << endl;
//     cin >> a >> b;
//     cout << "The product of a and b is " << product(a, b) << endl;
//     cout << "The product of a and b is " << product(a, b) << endl;
//     cout << "The product of a and b is " << product(a, b) << endl;
//     cout << "The product of a and b is " << product(a, b) << endl;
//     cout << "The product of a and b is " << product(a, b) << endl;
//     cout << "The product of a and b is " << product(a, b) << endl;
//     cout << "The product of a and b is " << product(a, b) << endl;
// }


// float moneyReceived(int currentMoney, float factor=1.04){
//     return currentMoney * factor;
// }

// int main(){
//     int money = 100000;
//     cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
//     cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
//     return 0;
// }