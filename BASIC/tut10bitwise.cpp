#include <iostream>

using namespace std;

int main()
{
    int x=11,y=7,z,g;
    z=x&y;
    g=x^y;
    
    cout<<z<<" "<<g;
    
    char a=50,b,c;
    b=a<<1;
    c=a>>1;
    cout<<" "<<(int)b<<" "<<(int)c;

    return 0;
}