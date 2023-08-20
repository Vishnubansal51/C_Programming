#include <iostream>
using namespace std;
int main()
{
    string s="welcome";


    char str[40];

    s.copy(str,3); // instead of 3 we can use s.length() if want to be fully copy
    str[3]='\0';   // done so that garbage value do not get printed

    cout<<str<<endl<<str;
}