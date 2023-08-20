#include<iostream>
using namespace std;
int main()
{
    int a[7]={1,5,7,8,15,27,54}, l=0,h=6,key,mid;
    cout<<"enter the key";
    cin>>key;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"found at"<<mid;
            return 0;
        }
        else if(key<a[mid])
        {
            h=mid-1;

        }
        else
        {
            l=mid+1;
        }
        
    }
    cout<<"not found";
    return 0;


}