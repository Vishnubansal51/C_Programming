#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    string str="WELCOME";
    string::iterator itt;
    int count = 0;

    for(itt=str.begin();itt!=str.end();itt++)
    {
        count++;
    }
    cout<<"length is "<<count;
    return 0;


}