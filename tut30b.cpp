#include <iostream>
#include <math.h>
using namespace std ;

class point 
{
    int x,x1,y1, y;
    public :
    point(int a,int a1,int b1 , int b){
        x = a ;
        y = b ;
        x1 = a1 ;
        y1 = b1 ;
      
    }
    void display()
    {
        double dist ;
        dist = sqrt(pow(x-x1) + pow(y-y1));
        cout<<"the value of is ("<<x<< "," <<y <<")"<< endl;
        cout<<"the distance between two point"<< x << ","<<y<<"dist is "<<dist;

    }
   
};

int main()
{
    point p (0,1,0,6);
    p.display();
    // point q (4,5);
    // q.display();
    
    return 0 ; 

}