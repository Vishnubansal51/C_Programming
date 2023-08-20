#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"enter three values ";
    cin>>a>>b>>c;
    r1= (-b + sqrt(b*b - 4*a*c))/(2*a);
    r2= (-b - sqrt(b*b - 4*a*c))/(2*a);
    d= b*b - 4*a*c;
    if(d==0)
    {
        cout<<"roots are equal"<<endl;
        cout << "roots are"<<(-b/(2*a))<<endl;
    

    }
    else if(d>0)
    {
        cout<<"roots are real"<<endl;
        cout<<r1<<r2;


    }
    else
    {
        cout<<"roots are img";

    }


    return 0;

}
