//yo print data in reverse order using reverse iterator
#include <iostream>
using namespace std;
int main()
{
    string str= "today";
    string:: reverse_iterator itt;
    for(itt=str.rbegin();itt!=str.rend();itt++)
    {
        cout<<*itt;
    }
    return 0;

}