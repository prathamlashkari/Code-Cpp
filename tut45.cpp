#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setroll(int a)
    {
        roll = a;
    }
    void getroll()
    {
        cout << "Your roll number is " << roll << endl;
    }
};

class Test : virtual public Student
{

    protected:
        float maths, physics;

    public:
        void setnum(float m1, float p1)
        {
            maths = m1;
            physics = p1;
        }
        void printmar()
        {
            cout << "Your marks is: " << endl
                << "Maths: " << maths << endl
                << "Physics: " << physics << endl;
        }
};

class Sports :  public virtual Student
{
    protected:
    float score;
    public:
    void setscore(float s){
        score = s;
    }
    void getscore(){
        cout<<"Your score is: "<<score<<endl;
    }
};
class result : public Test , public Sports 
{
    private:
    float total;
    public:
    void show(void){
        total = maths + physics+ score;
        getroll();
        printmar();
        getscore();
        cout<<"Your total score is: "<<total<<endl;
    }
};
int main()
{
    result yash;
    yash.setroll(076);
    yash.setscore(5000);
    yash.setnum(89.9,88.9);
    yash.show();
    return 0;
}
