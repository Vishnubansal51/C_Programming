#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"why"));
    m.insert(pair<int,string>(2,"bansal"));
    m.insert(pair<int,string>(3,"vishnu"));

    //using iterator
    map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    //using iterator to find vlaue
    map<int,string>::iterator itr1;

    itr1=m.find(3);
    cout<<"value found is"<<endl;
    cout<<itr1->first<<" "<<itr1->second<<endl;




}