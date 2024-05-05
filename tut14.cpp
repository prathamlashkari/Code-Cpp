// # include <iostream>
// using namespace std;

// typedef struct employee
// {
//     int id ;
//     char favchar ;
//     float salary ;
// }pr;

// int main()
// {
//     struct employee yash ;
//     yash.id = 21 ;
//     yash.favchar = 'p';
//     yash.salary = 89000 ;

//     cout<<yash.id<<endl;
//     cout<<yash.favchar<<endl;
//     cout<<yash.salary<<endl;

//     //  You can use "typedef" keyword  to short the name of the stuct employee you 
//     //  can write ep or any thing

//     pr pratham;
//     pratham.id = 90 ;
//     pratham.favchar = 'i' ;
//     pratham.salary = 3443433 ;

//     cout<<pratham.id<<endl;
//     cout<<pratham.favchar<<endl;
//     cout<<pratham.salary<<endl;
// }

//  *********************** UNION *********************
/* union is best way to allocate memory but you can use only one at a time 
 which is require */

//  union money {
//      int rice;
//      char car ; 
//      float pounds ;
//  };

//  int main()
// {
//     union money yash ; 
//     yash.car = 'c';//you can use only one value other wise it provide garbage value
//     cout<<yash.car;
// }

// *************************** ENUMS ************************

// int main()
// {
//     enum meal { breakfast,lunch,dinner };
//     cout<<breakfast<<endl;
//     cout<<lunch<<endl;
//     cout<<dinner<<endl;

//     meal m1 = lunch ;
//     cout<<m1 ;
//     return 0 ;
// }
