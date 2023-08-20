#include <iostream>
using namespace std;


int main()
{
    int x=10, y=10,z;
    try
    {
        if(y==10)
        throw 1;
        z=x/y;
        cout<<z<<endl;
   
    }

    catch (int e)
    {
        cout<<"division by zero"<<e;
    }
    cout<<endl<<"bye";
}


