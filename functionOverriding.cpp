#include<iostream>
using namespace std;

class Base
{
    public:
    //virtual function
    virtual void show()
    {
    cout<<"This is base class show ()"<<endl;
    }
};

class Derived : public Base
{
    public:
    void show()
    {
        cout<<"This is Derived class show ()"<<endl;
    }
};

int main()
{
    //create Derived class object
    Derived objD;
    objD.show();

    //create base class pointer
    Base* ptrBase;
    ptrBase=&objD;
    ptrBase->show();

    return 0;
}