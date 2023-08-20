#include <iostream>
using namespace std;

class base
{
    public:
    
    base()
    {
        cout<<"base constructor"<<endl;
        
    }

    virtual ~base(){ cout<<"base destructor"<<endl;}

};

class derived:public base
{
    public:
    derived()
    {
        cout<<"derived constructor"<<endl;    
    }
    ~derived()
    {
        cout<<"derived destructor"<<endl;
    }
};
 void fun()
 {
    base *p = new derived();  //making object in heap
    delete p;                 // we have to delete object that has beem made by us in heap
 }

int main()
 {
    fun();

 }