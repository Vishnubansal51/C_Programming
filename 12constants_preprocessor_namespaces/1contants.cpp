#include <iostream>
using namespace std;
int main ()
{
    int x=10;
    const int *p=&x;
   //  ++(*p);
    cout<<x;
    cout<<endl<<*p;
}