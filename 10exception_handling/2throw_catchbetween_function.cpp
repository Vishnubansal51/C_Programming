#include <iostream>
using namespace std;

int division(int a, int b)
{
    if (b==0)
    throw 1;
    else
    return a/b;
}

int main()
{
    int x=10, y=0, z;
    try 
    {
        z=division(x,y);
        cout<<z;
    }
    catch (int e)
    {
        cout<<"division by zero"<<e;
    }
    cout<<"byr";
}