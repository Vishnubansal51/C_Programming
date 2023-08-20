#include <iostream>
using namespace std;

class innova
{
    public:
    static int price;
    static int getprice()
    {
        return price;
    }


};

int innova::price=20;

int main()
{
    innova i1, i2,i3;
    cout<<i1.price<<endl<<i2.price<<endl<<i3.price;
    cout<<innova::price<<endl;
}