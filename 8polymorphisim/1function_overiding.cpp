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
    void display()   // this  is called fn overriding in this we are redefining th fn
    {
        cout<<"display of child";
    }
};

int main()
{
    derived d;
    d.display();

}