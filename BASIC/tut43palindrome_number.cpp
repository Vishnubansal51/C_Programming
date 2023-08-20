//to check whether the number is a palindrome
#include<iostream>
using namespace std;
int main()
{
    int num, n,r,reverse=0;
    cout<<"enter the number";
    cin>>num;
    n=num;
    while(n>0)
    {
        r=num%10;
        num=num/10;
        reverse=(reverse*10) + r;

    }
    cout<<reverse<<endl;

}