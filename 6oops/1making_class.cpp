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
    rectangle r1,r2;

    r1.length=10;
    r1.breadth=15;
    cout<<r1.area()<<" "<<r1.perimeter()<<endl;

    r2.length=20;
    r2.breadth=25;
    cout<<r2.area()<<" "<<r2.perimeter();
}