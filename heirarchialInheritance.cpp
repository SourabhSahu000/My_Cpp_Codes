#include <iostream>
using namespace std;

class A
{
    public:
    void showA()
    {
        cout << "this is class A function" << endl;
    }
};

class B : public A
{
    public:
    void showB()
    {
        cout << "this is class B function" << endl;
    }
};

class C : public A
{
    public:
    void showC()
    {
        cout << "this is class C function" << endl;
    }
};

class D : public A
{
    public:
    void showD()
    {
        cout << "this is class D function" << endl;
    }
};

int main()
{
    // create class object
    B objB;
    C objC;
    D objD;

    objB.showB();
    objB.showA();

    objC.showC();
    objC.showA();

    objD.showD();
    objD.showA();

    return 0;
}