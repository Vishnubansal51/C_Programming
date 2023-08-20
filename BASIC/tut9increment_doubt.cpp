#include <iostream>
using namespace std;
int main()
{

    int i=5,j,z=5;

  //  j=2* ++i  + 2* i++; doubt j should be 24
    j=2* i++  + 2* i++;
    cout<<i<<endl<<j   ;
    return 0;
}