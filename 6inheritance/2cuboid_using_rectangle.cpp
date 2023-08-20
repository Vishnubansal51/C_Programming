#include <iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle (int l=0, int b=0)
    {
        length=l;
        breadth=b;
    }
    
    int setlength(int l){length=l;}
    int setbreadth(int b){breadth=b;}
    int getlength(){return length;}
    int getbreadth(){return breadth;}



};

class cuboid: public rectangle
{
    private:

    int height;

    public:
    cuboid(int l=0, int b=0, int h=0)
    {
        height=h;
        setlength(l);
        setbreadth(b);
    }

    int setheight(int h){height=h;}
    int volume(){return getlength() *getbreadth() *height;}

    int getheight(){return height;}
};
int main()
{
    cuboid c(10,5,7);
    cout<<c.getlength()<<endl;
    cout<<c.getbreadth()<<endl;
    cout<<c.getheight()<<endl;
    cout<<c.volume();
    return 0;

}
