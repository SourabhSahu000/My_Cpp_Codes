#include<iostream>
using namespace std;

class A
{
    public:
    void showA()
    {
        cout<<"This is showA() in class A"<<endl;
    }
};
class B : virtual public A
{
    public:
    void showB()
    {
        cout<<"This is showB() in class B"<<endl;
    }
};
class C : virtual public A
{
    public:
    void showC()
    {
        cout<<"This is showC() in class C"<<endl;
    }
};
class D : public B, public C
{
    public:
    void showD()
    {
        cout<<"This is showD() in class D"<<endl;
    }
};

int main()
{
    D objD;
    objD.showD();
    objD.showC();
    objD.showB();
    objD.showA();
    return 0;
}