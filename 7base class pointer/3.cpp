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
    base b;
   // derived *ptr=&b; //not possible i cannot assign derived class pointer to base class object
    
   // ptr->fun1();
   // ptr->fun2();    //because fun2 is not in base class


    return 0;
}