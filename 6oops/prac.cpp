#include <iostream>
using namespace std;
class student
{
    private:
    int age;
    string first_name;
    string last_name;
    int standard;
    
    public:
    student (int a, int s,string l, string f )
    {
        age = a;
        first_name=f;
        last_name=l;
        standard=s;
    }
    int get_age(){return age;}
    int get_standard(){return standard;}
    string get_first_name(){return first_name;}
    string get_last_name(){return last_name;}
    
    string to_string();
    
};

int main() 
{
    int a, s;
    string l,f;
    cin>>a>>s>>l>>f;
    student s2( a,  s, l, f );
    cout<<s2.get_age()<<endl<<s2.get_first_name()<<endl<<s2.get_last_name()<<endl<<s2.get_standard();
    
    return 0;
}

string student :: to_string() 
{
    stringstream ss;
    
    ss<<age<<" ,"<<first_name<<","<<last_name<<" "<<","<<standard;
    
    return ss.str();
}
