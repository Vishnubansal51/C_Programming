#include<iostream>
using namespace std;
int main()
{
    float amount,dis_1,dis_2;
    cout<<"enter the amount";
    cin>>amount;
    if(amount<100)
    {
        cout<<"no discount";
    }
    else if(amount>=100 && amount<500)
    {
        dis_1=0.1* amount;
        cout<<"discount is"<<dis_1;
    }
    else     
    {
        cout<<"discount is"<<0.2* amount;
    }
    return 0;
}