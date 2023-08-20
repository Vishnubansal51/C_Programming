#include <iostream>
using namespace std;
int main()
{
    int  i,a[10]={1,2,3,4,5,8,7,9,5,9};
    //print all array together
    for(i=0;i<10;i++)
    {

        cout<<a[i]<<endl;
    }
    // another method of writing loop
    for(auto x:a){
        cout<<x<<endl;
    }

    return 0;
}