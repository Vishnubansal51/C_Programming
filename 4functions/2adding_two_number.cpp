#include <iostream>
using namespace std;
// making adding function
float add(float x, float y)
{
    float z;
    z= x+y;
    return z;
}
// starting with main function 
int main()
{
    float x=2.3f, y=7.9f,z;
    z=add(x,y);
    cout<<z<<endl;

    
}
