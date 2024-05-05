//  Arrays and pointers

// #include <iostream>
// using namespace std;

// int main()
// {
//     int marks[5] = {66, 77, 88, 99, 66};
//     // int mathsmarks[4];

//     // // This is maths marks
//     // cout << "This is the maths marks"<<endl;
//     // mathsmarks[0] = 66;
//     // mathsmarks[1] = 77;
//     // mathsmarks[2] = 88;
//     // mathsmarks[3] = 99;
//     // mathsmarks[4] = 66;

//     // cout << mathsmarks[0]<<endl;
//     // cout << mathsmarks[1]<<endl;
//     // cout << mathsmarks[2]<<endl;
//     // cout << mathsmarks[3]<<endl;
//     // cout << mathsmarks[4]<<endl;
//     // //  another way to print an array

//     // cout << "These are marks" << endl;
//     // cout << marks[0]<<endl;
//     // cout << marks[1]<<endl;
//     // //  Lets change the value of  the marks 2 
//     // marks[2] = 55; 
//     // cout << marks[2]<<endl;
//     // cout << marks[3]<<endl;
//     // cout << marks[4]<<endl;
     

//     //  Array using loops 
//     // for(int i = 0 ; i<=4 ; i++){
//     //     cout<<"The marks " <<i<<" is "<<marks[i]<<endl;
//     // }

//     // Quick quiz same program using while and do while loop 
    
//     //  By while loop
//     //  int i = 0 ;
//     //  while(i<=4){
//     //     cout<<"The marks " <<i<<" is "<<marks[i]<<endl;
//     //     i++;
//     //  }

//     //  do while loop 
//     //  int i = 0;
//     //  do{
//     //     cout<<"The marks " <<i<<" is "<<marks[i]<<endl;
//     //     i++;
//     //  }while(i<=4) ;
// }



// Pointers and arrrays 

// int main()
// {
//     int marks[] = {66, 77, 88, 99, };
//     int * p = marks ;

    // cout<<"The address of marks[0]: " <<*p<<endl; 
    // cout<<"The address of marks[1]: " <<*(p+1)<<endl; 
    // cout<<"The address of marks[2]: " <<*(p+2)<<endl; 
    // cout<<"The address of marks[3]: " <<*(p+3)<<endl;

    // using p++
    // cout<<*(p++)<<endl;
    // cout<<*(p)<<endl; 
    
//    for (int i=1 ; i<=4 ; i++){
//     cout<<"The address of "<<marks[i] <<&marks[i]<<endl; 
//    }
    
// }