#include <iostream>
using namespace std;

class complex
{
    private:
    int real;
    int img:

    public:
    complex(intr,inti)
    {
        real=r;
        img=i;
        
    }
    void display()
    {
        cout<<real<<"+i"<<img;
    }
    complex operator+(complex x)
    {
        complex temp;
        temp.real= real+x.real;
        temp.img = img +x.img;
        return temp;
    }

};

int main()
{
    complex c1(5,6);
    complex c2(8,9);
    complex c3;
    c3=  c1 + c2;
    c3.display();
    return 0;
}