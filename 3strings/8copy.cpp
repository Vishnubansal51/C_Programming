#include <iostream>
using namespace std;
int main()
{
    string s="welcome";


    char str[40];

    s.copy(str,3);
    str[3]='\0';
    cout<<str<<endl<<str;
}