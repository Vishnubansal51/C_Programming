#include <iostream>
using namespace std;

class myexception: exception //inheriting from inbuilt class exception
{

};

int main()
{
    int x=10, y=0, z;
    try 
    {
        if (y==0)
        throw myexception();
        z=x/y;
        cout<<z<<endl;
    }
    catch (myexception)
    {
        cout<<"division by zero";
    }
    cout<<"byr";
}