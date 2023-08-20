#include <iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;
    
    public:

    int set_length(int l)
    {
        if(l >= 0)
        length=l;
        else
        length=0;     //there is another way assigning the value other than 0 that we will discuss later in which system you have entered invalid value

    }
    
    int set_breadth(int b )
    {
        if(b >= 0)
        breadth=b;
        else
        breadth=0;
        
    }
    int get_length()
    {
        return length;       //is there any need writing get_lenght fn yes only if you want to print length
    }

    int get_breadth()
    {
        return breadth;
    }
    

    int get_area()
    {
        return length *breadth;
    }

    int get_perimeter()
    {
        return 2*(length + breadth);
    }

};

int main()

{
    rectangle r1,r2;

    r1.set_length(-10);              // this is the wrong way to set value by contructors we will get to know 
    r1.set_breadth(50);
    cout<<" "<<r1.get_area()<<" "<<r1.get_perimeter()<<endl;

    r2.set_length(20);
    r2.set_breadth(25);
    cout<<r2.get_area()<<" "<<r2.get_perimeter();
}