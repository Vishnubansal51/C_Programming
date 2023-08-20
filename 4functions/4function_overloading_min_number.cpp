#include <iostream>
using namespace std;
int Min(int x, int y)
{
    return x<y?x:y;
}
int Min(int x, int y, int z)
{
    return x<y && x<z ?x:y<z?y:z;
}
float Min( float x, float y)
{
    return x<y?x:y;
}

int main()
{
    int a=10,b=50;
    cout<<Min(a,b)<<endl;
    
    int q=50,w=555,e=555412;
    cout<<Min(q,w,e)<<endl;

    float r=45.5f,t=78.6f;
    cout<<Min(r,t);

   


}








