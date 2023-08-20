//to print string using for loop
#include<iostream>
using namespace std;
int main()
{
    string str="today";
    
    for(int i=0; str[i]!='0';i++)
    {
        str[i]=str[i] -32;
    }

    cout<<str<<endl;
    return 0;
}