#include <iostream>
using namespace std;

class test
{
    int *p;
    

    public:

    test ()
    {
        p = new int[10];
        cout<<"constructor of test"<<endl;
        
        
    }
    ~test()
    {
        delete[]p;
        cout<<"destructor of test";
        
    }
    void fun()
    {
        test *p= new test();
        delete p;
    }
    int main()
    { 
        fun();

    }
};