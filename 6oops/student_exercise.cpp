#include <iostream>
using namespace std;

class student
{
    private:
    int roll;
    string name;
    int marks1, marks2 ,marks3;

    public:
    student(int r,string n, int m1,int m2, int m3)
    {
        roll=r;
        name=n;
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }

    int total()
    {
        return marks1+ marks2 +marks3;
    }

    char grade();

  
};

int main()
{
    int r, m1, m2, m3;
    string n;
    cout<<"enter the roll number"<<endl;
    cin>>r;
    cout<<"enter the name "<<endl;
    cin>>n;
    cout<<"enter the marks"<<endl;
    cin>>m1>>m2>>m3;

    student r1(r, n ,m1, m2 , m3);

    cout<<r1.total()<<" "<<r1.grade();

    return 0;
}

char student:: grade()
{
    float average= total()/3;

        if (average>80)
        return 'a';

        else if(average>=40 && average<=80)
        return 'b';

        else
        return 'c';
}
