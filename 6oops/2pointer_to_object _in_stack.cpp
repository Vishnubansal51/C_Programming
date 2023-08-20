#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;
    
    int area()
    {
        return length *breadth;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }

};

int main()
{
    rectangle r;
    rectangle *p;

    p=&r;
    p-> length=10;
    p->breadth=15;

    cout<<p ->area();
    cout<<p ->perimeter();
    return 0;
}