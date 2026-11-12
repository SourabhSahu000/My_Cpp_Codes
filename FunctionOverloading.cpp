#include<iostream>
#include<string>
using namespace std;

class MyFunction
{
    public:
    void ADD(float a,float b)
    {
        cout<<"This is float-float argument functions"<<endl;
        cout<<"a+b="<<a+b<<endl;
    }

    void ADD(string a,string b)
    {
        cout<<"This is string-string argument functions"<<endl;
        cout<<"a+b="<<a<<" "<<b<<endl;
    }

    void ADD(char a, int b, string c)
    {
        cout<<"This is char-int-string argument functions"<<endl;
        cout<<"a+b+c="<<a<<" "<<b<<" "<<c<<endl;
    }

    void ADD(bool a,bool b, bool c,bool d)
    {
        cout<<"This is bool-bool-bool-bool argument functions"<<endl;
        cout<<"a+b+c+d="<<a+b+c+d<<endl;
    }
};

int main()
{
    MyFunction m1,m2,m3,m4,m5;
    m1.ADD(10.5,11.4);
    m2.ADD("sourabh","sahu");
    m3.ADD('a',100,"Indore");
    m4.ADD(1,1,1,1);
    int a,b,c,d;
    cout<<"Enter value a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;
    m5.ADD(a,b,c,d);
    return 0;
}