#include <iostream>
#include <cstring>
using namespace std;
int  main()

{
    char  s[10]="285";
    char s2[10]="54.25";
    long int x = strtol(s,NULL,10);
    float y= strtof(s2,NULL);
    cout<<x+10<<endl<<y-10;

    return 0;


}