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
    
    // making unparametrized constructor
    /*rectangle ()
    {
        length =1;
        breadth=2;
    } */

    // making parametrized constructor
    rectangle(int l= 2 , int b=1)
    {
        //calling set function so that it can check the value

        set_length(l);
        set_breadth(b);
    }

    // making copy constructor

    rectangle (rectangle &r)    // by referencing not by value so that new reactangle will not formed
    {
        length=r.length;       // our rectangle length is same as assigned rectangle
        breadth=r.breadth;
    }
};

int main()
{
    //using unparametrized constructor
    rectangle r1;
    cout<<r1.get_area()<<" "<<r1.get_perimeter()<<endl;

    //using parmaterized constructor
    rectangle r2(15,25);
    cout<<r2.get_area()<<" "<<r2.get_perimeter()<<endl;
    // using copy constructor

    rectangle r3(r1);
    cout<<r3.get_area()<<" "<<r3.get_perimeter();

    return 0;




}