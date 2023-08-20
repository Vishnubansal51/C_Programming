#include <iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle();
    rectangle(int l, int b);
    rectangle (rectangle &r);
    int getlength(){return length;}
    int getbreadth(){return breadth;}
    int setlength(int l);
    int setbreadth(int b);
    int area ();
    int perimeter();
    bool isSquare();   //enquiry function 
    ~rectangle();      //destructor

};

int main()
{
    rectangle r(10,5);
    cout<<r.area()<<" "<<r.perimeter()<<" "<<r.getlength()<<" "<<r.getbreadth()<<endl;
    if (r.isSquare())
    cout<<"yes"<<endl;
    else
    cout<<"NO"<<endl;
}

//using scope resolution we will write lthe body of function

//unparametrized
rectangle :: rectangle()
{
    length=1;
    breadth=1;
}

//parameterized
rectangle::rectangle(int l ,int b)
{
    length=l;
    breadth=b;
}
//copy constructor
rectangle::rectangle(rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
int rectangle :: setlength(int l)
{
    if (length>=0)
    return length=l;
    else
    return length=1;

}

int rectangle :: setbreadth(int b)
{
    if (breadth>=0)
    return breadth=b;
    else
    return breadth=1;
}
int rectangle :: area()
{
    return length*breadth;
}
int rectangle :: perimeter()
{
    return 2*(length + breadth);

}
bool rectangle:: isSquare()
{
    return length==breadth;
}
rectangle::~rectangle(){
    cout<<"rectangle destroyed";
}
 

 


