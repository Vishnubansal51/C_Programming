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
    friend ofstream & operator << (ofstream &ofs, student &s);
};

ofstream & operator << (ofstream &ofs, student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;

}
int main()
{
    student s1;
    s1.name="vishnu "; s1.roll=21104042; s1.branch="EE";

    ofstream ofs("properstudent.txt");
    // i want to store data as object but it storing data individully and if want to store data individually then whats the purpose of making class
    /*ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl*/
    ofs<<s1;


    ofs.close();
}