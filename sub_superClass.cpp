#include<iostream>
using namespace std;

class SuperClass
{
    string ClassName;
    string ClassType;
    public:
    //create class constructor
    SuperClass(string ClassName=" ",string ClassType=" ")
    {
        this->ClassName=ClassName;
        this->ClassType=ClassType;
    }

    void show()
    {
        cout<<"This is Super Class show function."<<endl;
        cout<<"Class Name is "<<ClassName<<" and Class Type is "<<ClassType<<endl;
    }
};

class SubClass : public SuperClass
{
    string _ClassName;
    string _ClassType;
    public:

    SubClass() : SuperClass("parent","parentTypeClass")
    {
        _ClassName=" ";
        _ClassType=" ";
    }
    //create class constructor
    SubClass(string _ClassName,string _ClassType)
    {
        this->_ClassName=_ClassName;
        this->_ClassType=_ClassType;
    }

    void _show()
    {
        cout<<"This is Super Class show function."<<endl;
        cout<<"Class Name is "<<_ClassName<<" and Class Type is "<<_ClassType<<endl;
    }
};

int main()
{
    //create class object
    SubClass objSub("SubClass","ChildType") , objSub1;
    objSub._show();
    SubClass::SuperClass objSup("SuperClass","BaseType");
    objSup.show();
    objSub1.show();
}