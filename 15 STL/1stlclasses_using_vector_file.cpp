#include <iostream>
//vector file
#include<vector>
using namespace std; 

int main()
{
    vector <int> v= {2,4,6,8,10};
    v.push_back(100);
    v.push_back(500);
    v.pop_back();
    
    //displaying the value using for each loop
    cout<<"using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;  

    // another method for iterating using itertor class
    vector <int> ::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    cout<<*itr<<endl;

    //we want to increment the value
    vector <int> ::iterator itr1;
    cout<<"using iterator"<<endl;
    cout<<"incremetd value"<<endl;
    for(itr1=v.begin();itr1!=v.end();itr1++)
    cout<<++*itr1<<endl;

    //if we want to see that value actually modified after incremation
    cout<<"checking after incremition the value modified or not"<<endl;
    for(int x:v)
    cout<<x<<endl;  
    

}
