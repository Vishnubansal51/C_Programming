#include <iostream>
using namespace std;

class parent 
{
    public:
    void display()
    {
        cout<<"dosplay of parent";
    }

};

class derived:public parent
{
    public:
    void display(int x)   // this is not function overriding
    {
        cout<<"display of child";
    }
};

int main()
{
    derived d;
   // d.display();
   d.parent::display();



}