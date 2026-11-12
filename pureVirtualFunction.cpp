#include<iostream>
using namespace std;

//abstract class
class A
{
    public:
    void showA()
    {
        cout<<"This is showA() in class A"<<endl;
    }
    //create pure virtual function
    virtual void test()=0;
};

class B : public A
{
    public:
    void showB()
    {
        cout<<"This is showB() in class B"<<endl;
    }

    void test()
    {
        cout<<"This is redefined pure virtual function in class B"<<endl;
    }
};

class C : public B
{
    public:
    void showC()
    {
        cout<<"This is showC() in class C"<<endl;
    }
};

class D : public C
{
    public:
    void showD()
    {
        cout<<"This is showD() in class D"<<endl;
    }
};

int main()
{
    // A objA;
    //objA.showA();

    //create class object
    B objB;
    objB.showB();

    C objC;
    objC.showC();

    D objD;
    objD.showD();

    //create pointer of class A
    A* ptrA;
    ptrA=&objB;
    ptrA->showA();

    return 0;
}