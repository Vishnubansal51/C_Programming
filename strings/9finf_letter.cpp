#include <iostream>
using namespace std;
int main()
{
    string str="vishnu is god godess";

    cout<<str.find_first_of('o',12); //here 12 means that it will see o from index 12 onwards
    cout<<str; 
    return 0;
}