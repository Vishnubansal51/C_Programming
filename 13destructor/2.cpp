#include <iostream>
using namespace std;

class test 
{
    public:
    test()
    {
        cout<<"test created"<<endl;
        
    }

    ~test() // destructor 
    {
        cout<<"test destroyed"<<endl;
    }
};
int main()
{
    test *p =new test(); //constructor is called

    delete p;  //destructor is called
}