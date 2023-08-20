#include <iostream>
using namespace std;

void display()
{
    cout<<"life";

}
int main()
{
    void(*fp)();
    fp= display;
    (*fp)();
}