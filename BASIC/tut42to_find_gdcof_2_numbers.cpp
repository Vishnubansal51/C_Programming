//TO find greatest common divisour
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the two no.";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else if(n>m)
        {
            n=n-m;
        }
    }
    cout<<m;
    return 0;
}