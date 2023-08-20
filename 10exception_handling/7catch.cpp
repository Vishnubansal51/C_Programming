#include <iostream>
using namespace std;
class myexception1: exception
{

};
class myexception2:public myexception1
{

};

int main()
{
    try 
    {
        throw myexception1();
    }

   /* catch(...)
    {
        cout<<"mix catch"<<endl;
    }*/                      // all catch handler must be last
    catch (myexception2 e)
    {
        cout<<"exp2"<<endl;
    }
    catch (myexception1 e)
    {
        cout<<"exp1"<<endl;
    }
    catch(...)
    {
        cout<<"mix catch"<<endl;
    }
    
}