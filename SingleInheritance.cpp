#include<iostream>
using namespace std;

//this is base(parent) class of derived(child) class
class base
{
    public:
    void showA()
    {
        cout<<"This is a showA() inside base class "<<endl;
    }
};

//this is derived(child) class of base(parent) class
class derived:public base
{
    public:
    void showB()
    {
        cout<<"This is a showB() inside derived class "<<endl;
    }
};

int main()
{
    //create class instance
    base objb;
    cout<<"Call showA() function using base class object"<<endl;
    objb.showA();

    derived objd;
    cout<<"\n Call showA() and showB function using derived class object bcz class derived inherite all public properties of base class using single inheritance"<<endl;
    objd.showA();
    objd.showB();
    return 0;
}