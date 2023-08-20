#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
            
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
public:
    	Isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		//Write your code here.
        void fun()
        {
            cout<<"In an isoceles triangle two sides are equal";
        }
};

int main(){
    Isosceles iS;
    
    return 0;
}