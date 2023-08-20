#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20]="fuck";
    char s2[10]="you";

  
    strncat(s1,s2,2);
    cout<<s1;
    return 0;
}