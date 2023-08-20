// to display the digit of number
#include <iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"enter the number";
    cin>>n;
    while (n<0)
    {
        /* code */
        r=n%10;
        n=n/10;
        cout<<r;

       
    }
    cout<<endl;
    return 0;
    
}