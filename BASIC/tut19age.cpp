#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age";
    cin>>age;
    
    if(age>=12 && age<=50)
    {
        cout<<"young";
    }
    else
    {
        cout<<"not young";
    }
    if(age<12 || age>50)
    {
        cout<<"ellibble for the offer";

    }
    else
    {
        cout<<"not elligble for the offer";
    }
    return 0;
}