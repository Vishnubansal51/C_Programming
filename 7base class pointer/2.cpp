#include <iostream>
using namespace std;

class base
{

    public :
    void fun1()
    {
        cout<<"fun1 of base"<<endl;

    }
};

class derived :public base{
    public :
    
    void fun2()
    {
        cout<<"fun2 of derived"<<endl;
    }
};

int main()
{
    derived d;
    base *ptr=&d;  //pointer of base class which is pointing towards derived class object
    ptr->fun1();
   // ptr->fun2();    //because fun2 is not in base class


    return 0;
}