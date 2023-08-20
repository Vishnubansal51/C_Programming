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
    test t;
}