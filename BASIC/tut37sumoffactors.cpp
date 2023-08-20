#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;

        }
        

    }
    cout<<"sum of factors"<<sum<<endl;
    if(2*n==sum)
    {
        cout<<"perfect no";
    }
    else{
        cout<<"not perfect number";
    }
    return 0;
}