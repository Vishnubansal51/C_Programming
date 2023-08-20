#include <iostream>

using namespace std;

class rectangle 
{
    public:

    void area()
    {
        cout<<"area of the rectangle"<<endl;

    }
};

class cuboid:public rectangle

{
    public:
    void volume()
    {
        cout<<"cuboid volume"<<endl;
    }
};

int main()
{
    rectangle r;
    //cuboid *ptr=&r; //not possible
    cuboid d;
    rectangle *ptr= &d; //basically it is saying tat rectanh=gle is cuboid partially it is correct

    ptr->area();
   // ptr->volume();//it is not present in rectangle class
   return 0;
}