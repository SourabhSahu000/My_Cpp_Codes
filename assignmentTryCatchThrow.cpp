#include <iostream> //assignmentTryCatchThrow
using namespace std;

int main()
{
    int a=10;
    char b='a';
    float c=32.23;

    try
    {
        throw(a);
        
        //throw 56.76; default error case
    }
    catch(int a)
    {
        cout<<"integer error"<<endl;
    }
    catch(char b)
    {
        cout<<"character error"<<endl;
    }    
    catch(float c)
    {
        cout<<"float error"<<endl;
    }
    catch(...)
    {
        cout<<"default error"<<endl;
    }

    return 0;
}