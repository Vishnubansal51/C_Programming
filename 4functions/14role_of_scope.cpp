#include <iostream>
using namespace std;

int g=5;
void fun()
{
    int g=10;
    {int g=0;

    g++;     //here we will take g=0
    cout<<g<<endl;
    }
    cout<<g<<endl;       // g=10

    //using scope resolution we can access global variable at any place
    cout<<::g<<endl;
}
int main()
{
    cout<<g<<endl;
    fun();         //here g is global variable
    cout<<g<<endl;
}