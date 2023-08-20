#include <iostream>
using namespace std;
int main()
{

    int size ;
    cout<<"enter number of elements";
    cin>>size;
    int a[size];
     
     // what will be the size of array
    cout<<sizeof a<<endl;

    // I want to change the size of array  but i cannot happen in stack for this we have make dyanmic array in heap
    size=25;
    return 0;
}