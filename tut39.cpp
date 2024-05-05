#include <iostream>
using namespace std;
class student{
    int roll_number;
    public:
    void set_roll(int);
    void get_roll(void);
};
void student :: set_roll(int r){
    roll_number = r ;
}
void student :: get_roll(){
    cout<< roll_number;
}

class exam : public student {
    protected :
    float maths;
    float physics ;
    public :
    void setmarks(float ,float);
    void getmarks(void);

};

void exam:: setmarks(float m1, float p1){
    maths  = m1 ;
    physics = p1 ;
}
void exam :: getmarks(){
    cout<<"The marks of the maths are: "<<maths<<endl;
    cout<<"The marks of the physics are: "<<physics<<endl;

}

class result : public exam{
    float percentage ;
    public:
   
    void getresult(){
         get_roll();
         getmarks();
        cout<<"The result is "<<(maths+physics)/2<<endl;
    }

};

int main()
{
    result yash;
    yash.set_roll(076);
    yash.setmarks(88.9,77.7);
    yash.getresult();
    return 0;
}