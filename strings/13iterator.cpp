//printing letter using iterator from begining
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str="today";
    string::iterator it;

    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it; // to get output i use defrencing
    }
    cout<<endl;
    return 0;
}