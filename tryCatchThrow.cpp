#include<iostream>   //tryCatchThrow
using namespace std;

int main()
{
    cout<<"Code start here :"<<endl;
    int a,b,c;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    cout<<"number 1 : "<<a<<endl;
    cout<<"number 2 : "<<b<<endl;
    
    try
    {
       if(b==0)
       throw b;
       else
       c=a/b;
       cout<<endl<<"Division is : "<<c;
    }
    
    catch(int b)
    {
        cout<<"Divisor can't be zero"<<endl;
    }

    cout<<"Addition is : "<<a+b<<endl;
    cout<<"Bye Bye"<<endl;
    cout<<"code ends here"<<endl;

    return 0;
}