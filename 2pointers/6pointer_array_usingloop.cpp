#include <iostream>
using namespace std;
int main()
{
    int a[5]{4,8,7,9,70};
    int *p=a;

    cout<<p<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl; // *p or a[i] or a[i] or *(a+i) all is same but if not use * then it will show us there address and also we can use p instead of a
        p++;
    }
    
    cout<<p<<endl;

    return 0;
}
