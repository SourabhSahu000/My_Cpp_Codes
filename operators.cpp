#include<iostream>
using namespace std;

class AllOperator
{
    int TypeOfOperator,a,b,z;
    bool x,y;


    public:
    void myOperator()
    {
        a:
        cout<<"Enter operator type :\nPress 1 for Unary Operator"<<endl;
        cout<<"Press 2 for Arithmatic Operator"<<endl;
        cout<<"Press 3 for Logical Operator"<<endl;
        cout<<"Press 4 for Assignment Operator"<<endl;
        cout<<"Press 5 for Relational Operator"<<endl;
        cout<<"Press 6 for Bitwise Operator"<<endl;
        cin>>TypeOfOperator;
        switch (TypeOfOperator)
        {
            case 1:
            cout<<"----------------------Unary Operator-------------------"<<endl;
            cout<<"Enter the value of a:"<<endl;
            cin>>a;

            cout<<"Preincrement(++a)="<<++a<<endl;
            cout<<"Postincrement(a++)="<<a++<<endl;
            cout<<"Predecrement(--a)="<<--a<<endl;
            cout<<"Postdecrement(a--)="<<a--<<endl;
            cout<<"a="<<a<<endl;
            goto a;

            case 2:
            cout<<"----------------------Arithmatic Operator-------------------"<<endl;
            cout<<"Enter the value of a and b:"<<endl;
            cin>>a>>b;

            cout<<"a+b="<<a+b<<endl;
            cout<<"a-b="<<a-b<<endl;
            cout<<"a*b="<<a*b<<endl;
            cout<<"a/b="<<a/b<<endl;
            cout<<"a%b="<<a%b<<endl;
            goto a;
        
            case 5:
            cout<<"----------------------Relational Operator-------------------"<<endl;
            cout<<"Enter the value of a and b:"<<endl;
            cin>>a>>b;
            if(a>b)
            {
                cout<<"a>b"<<endl;
            }
            else if(b>a)
            {
                cout<<"b>a"<<endl;
            }
            else if(a==b)
            {
                cout<<"a=b"<<endl;
            }
            goto a;
        
            case 4:
            cout<<"----------------------Assignment Operator-------------------"<<endl;
            cout<<"Enter the value of a:"<<endl;
            cin>>a;
            
            cout<<"a+=3"<<(a+=3)<<endl;
            cout<<"a-=2"<<(a-=3)<<endl;
            cout<<"a*=5"<<(a*=3)<<endl;
            cout<<"a/=3"<<(a/=3)<<endl;
            cout<<"a="<<a<<endl;
            goto a;
        
            case 3:
            cout<<"----------------------logical Operator-------------------"<<endl;
            goto a;

            case 6:
            cout<<"----------------------Bitwise Operator-------------------"<<endl;
            cout<<"Enter value of x,y,z in boolean :"<<endl;
            cin>>x>>y>>z;
            cout<<"x&y="<<(x&y)<<endl;
            cout<<"x|y="<<(x|y)<<endl;
            cout<<"x^y="<<(x^y)<<endl;
            cout<<"~x="<<(~x)<<"~y="<<(~y)<<endl;
        
            cout<<"z<<2 ="<<(z<<2)<<endl;
            cout<<"z>>2 ="<<(z>>2)<<endl;
            goto a;
        }
    }
};

int main()
{
    //create class object
    AllOperator AO1;
    AO1.myOperator();
}