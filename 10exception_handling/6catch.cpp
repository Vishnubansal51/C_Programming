#include <iostream>
using namespace std;

int main()
{
    try 
    {
        throw string{"vishnu"};
    }
    catch (int e)
    {
        cout<<"int catch"<<e<<endl;
    }
    catch (double e)
    {
        cout<<"double catch"<<endl<<e;
    }
    catch(...)
    {
        cout<<"mix catch"<<endl;
    }
}