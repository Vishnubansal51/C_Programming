#include <iostream>
using namespace std;

class student
{
    public:
    int roll;
    string name;
    static int addno;
    student(string n)
    {
        addno++;
        roll=addno;
        name =n;
    }
    void display()
    {
        cout<<"name"<<name<<endl<<"roll"<<roll<<endl;
    }
};
int student :: addno=0;
int main()
{ 
    student s1("vishnu");
    student s2("bansal");
    s1.display();
    s2.display();
    cout<<"number of admission "<<student::addno<<endl;
}