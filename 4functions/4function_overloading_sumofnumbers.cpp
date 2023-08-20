#include <iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
    
}
float add(float x, float y)
{
    return x+y;
}
int add(int x,int y, int z)
{
    return x+y+z;
}
int main()
{
    int a=10, b=5,c;
    c=add(a,b);
    cout<<c<<endl;
    float q=1.5f, e=1.9f, l;
    l=add(q,e);
    cout<<l<<endl;
    int w=10,r=5,i=78,m;
    m =add(w,r,i);
    cout<<m;
    return 0;



}







