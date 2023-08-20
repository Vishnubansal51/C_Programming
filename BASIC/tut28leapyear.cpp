#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the yr";
    cin>>year;
    if(year%4==0)
    {
        cout<<"entered year is leap year";

    }
    else if(year%100==0)
    {
        cout<<"entered year is not leap year";

    }
    else
    {
        cout<<"enterd year  leap year";

    }
    return 0;
}

