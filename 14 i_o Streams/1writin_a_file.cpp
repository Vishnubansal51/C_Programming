#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream outfile("my.txt",ios::trunc);
    outfile <<"hello world"<<endl;
    outfile<<254;
    
    outfile.close();
}

