#include <iostream>
using namespace std;
int main()
{
    char s[20];
    cout<<"enter your fucking name";
    cin>>s;
    cout<<"my fucking name is "<<s; //but here problem rises if i have multiple words so for this we use below cord

    char v[20];
    cout<<"enter your fucking name";
    cin.get(v,20);
    cout<<"my fucking name is "<<v;


    return 0;
}