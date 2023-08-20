#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,5,9,6,3};

    for (int &x:a)
    {
        cout<<++x<<endl;
    }
    return 0;
}