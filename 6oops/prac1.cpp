#include<iostream>
using namespace std;

class box
{
    private :
    int length, breadth, height;
    public:

    box(int l=0, int b=0, int h=0)
    {
        length = l;
        breadth=b;
        height = h;
    }
    int get_length(){return length;}
    int get_breadth(){ return breadth;}
    int get_height(){ return height;}
    int get_volume(){return length*breadth*height;}


};

int main()
{
    box b1(0,0,0);
    box b2(2,5,7);

    cout<<b1.get_length()<<endl<<b1.get_breadth()<<endl<<b1.get_height()<<endl<<b1.get_volume()<<endl<<b2.get_length()<<endl<<b2.get_breadth()<<endl<<b2.get_height()<<endl<<b2.get_volume();
}