#include<iostream>
#include <fstream>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    string branch;
    // making overloaded function
    
    friend ifstream & operator >> (ifstream &ifs, student &s);
};
ifstream & operator >> (ifstream &ifs, student &s)
{
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}

int main()
{
    student s1;
    ifstream  ifs ("properstudent.txt");
    ifs>>s1;
    cout<<"name " << s1.name<<endl;
    cout<<"roll " << s1.roll<<endl;
    cout<<"branch " << s1.branch<<endl;
    ifs.close();
}