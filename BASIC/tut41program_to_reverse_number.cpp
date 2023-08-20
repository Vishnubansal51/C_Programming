//to reverse a number
#include <iostream>
using namespace std;
int main()
{
    int n,r,reverse=0;
    cout<<"enter n";
    cin>>n;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        reverse=reverse*10 + r;
        
    }
    cout<<"reverse no is"<<reverse;
    return 0;
}