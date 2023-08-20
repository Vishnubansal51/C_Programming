#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    string str="WELCOME";
    int count = 0;

    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"length is "<<count;
    return 0;


}