#include <iostream>
using namespace std;

class myexception: exception //inheriting from inbuilt class exception
{

};
int division (int a,int b) throw (myexception) // just declaring that  it is throwing something
{
    if (b==0)
    throw myexception();
    else
    return a/b;
}

int main()
{
    int x=10, y=0, z;
    try 
    {
        
        z=division(x,y);
        cout<<z<<endl;
    }
    catch (myexception)
    {
        cout<<"division by zero";
    }
    cout<<"byr";
}