#include<iostream>
using namespace std;

class parent
{
    private : int a;
    protected: int b;
    public :int c;

    void funparent()
    {
        a=10;
        b=5;
        c=15;
    }

};

class child:public parent

{
    public:
    void funchild()
    {
      //  a=10;    cannot access this because it is private in the previous class
        b=5;
        c=15;
    }
};

class grandchild: public child
{
    public:
    void fungrandchild()
    {
       // a=10;
        b=5;
        c=20;
    }
};

int main()
{
    child c;

  //  c.a=10; cannot acces this because of private
  //  c.b=50;  cannot access this because of protected
    c.c=100;
}