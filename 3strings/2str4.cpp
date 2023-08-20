#include <iostream>
using namespace std;
int main()
{
    char s[100];
    char s2[100];

    cout<<"oye apna naam das";
    cin.getline(s,100);

    cout<<"acha"<<s<<"tera naam hai"<<endl;

    cout<<"enter your name";
    cin.getline(s2,100);
    
    cout<<"welcome"<<s2<<endl;

    //but here problem we get that only one time weare available to give our name so to solve this we use get.line
    return 0;
}