#include <iostream>
#include<fstream>

using namespace std;
int main()
{
    ifstream infile;
    infile.open("my.txt");

    //to check whether the file is there or not

    if (!infile) cout<<"file cannot be opnened";
    // reading from file
    string name;
    int  x;
    infile>> name>>x;
    // closing the file
    infile.close();
    // displaying what we have read from fiel
    cout<<name<<" "<<x;

    //to check whether the file is end or not

    if (infile.eof())  cout<<"end of file reached";

    
}
