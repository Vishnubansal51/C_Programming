32#include <iostream>
using namespace std;

class student
{
    private:
    int roll_number();
    string name_student();
    float marks();

    public:
    student(int roll, string name, float mark1,float mark2, float mark3);

    int set_roll(int l);
    string set_name( string n);
    float set_mark(float m);

    float get_mark( );

    string get_grade();

};

int main()
{
    student r1(21104042 , "vishnu" ,70.5f,80.8f,90.0f)

}

student:: student(int roll, string name, float mark1,float mark2, float mark3)
{
    roll_number =roll;
    name_student =name;
    marks =mark1;
}
