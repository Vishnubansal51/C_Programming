#include<iostream>
using namespace std;
int main()
{
    int amount;

    cout<<"enter the amount";
    cin>>amount;
        
    float discount1,discount2;
    discount1= (float)amount/10;
    discount2= (float)amount/5;
    cin>>discount1>>discount2;

    switch(amount)
    {
        
        case 1: amount<100;
        cout<<"no discount";
        break;
        case 2: 100<=amount<500;
        cout<<discount1;
        break;
        case 3: amount>=500;
        cout<<discount2;
        break;

    }
    return 0;

}