#include <iostream>
using namespace std;

#define pi 3.1425
#define msg(x) #x
#ifndef pi
#define max(x,y)(x>y?x:y)


#define pi 3
#endif

int main()
{
    cout<< pi<<endl;
    cout<<max(15,8);
    cout<<msg(hello);
}
