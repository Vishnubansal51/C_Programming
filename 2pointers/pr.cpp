#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int *pa= &a ,  *pb=&b;
    cin>>a>>b;
    cout<< *pa+*pb<< endl <<*pa-*pb;

    return 0;

}
