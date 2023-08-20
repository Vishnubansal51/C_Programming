#include<iostream>
using namespace std;

class your;   // imp because class your declartion is later of my class
class my
{
    private:
    int a=10;
    protected:
    int b;

    public:
    int c;
    friend your;
};
class your
{
    public:
    my m;
    void fun()
    {
        m.a=10;  // a and b accesible because of friend class
        m.b=15;
        m.c=50;
    }
};
int main()
{
    void fun();
    
}


