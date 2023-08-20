#include <iostream>
using namespace std;
int main()
{
    string str1="helolo";
    string str2="why";
    string str3="why";

    cout<<str1.compare(str2)<<endl;
    cout<<str2.compare(str3)<<endl;
    cout<<str2.compare(str1);

    return 0;
}
