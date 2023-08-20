#include <iostream>
using namespace std;
int main()
{
    char s[100];
    char s2[100];

    cout<<"oye apna naam das";
    cin.get(s,100);

    cout<<"acha"<<s<<"tera naam hai"<<endl;
    // important step
    cin.ignore();

    cout<<"enter your name";
    cin.get(s2,100);
    
    cout<<"welcome"<<s2<<endl;

    
    return 0;
}