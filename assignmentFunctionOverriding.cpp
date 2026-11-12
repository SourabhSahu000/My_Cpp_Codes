#include<iostream>
using namespace std;

class Saving
{
    public:
    int accno;
    string name;
    int balance;

    Saving(int accno,string name,int balance)
    {
        this->accno=accno;
        this->balance=balance;
        this->name=name;
    }
    virtual void withdraw()
    {
        int amt;
        cout<<"Enter the amount you want to withdraw:";
        cin>>amt;
        if (amt<=balance)
        {
            balance-=amt;
            cout<<"The amount after withdrawl is "<<balance<<endl;
        }
        else
        {
            cout<<endl<<"Insufficient Balance";
        }
    }
    virtual void deposit()
    {
        int amt;
        cout<<"Enter amount to deposit :"<<endl;
        cin>>amt;
        balance+=amt;
        cout<<"Amount after deposit is "<<balance<<endl;
    };
};
class Loan : public Saving
{
    public:
    Loan(int accno,string name,int balance) : Saving(accno,name,balance){}
    void withdraw()
    {
        cout<<"Can't withdraw Pay remaining amount of "<<balance;
    }
    void deposit()
    {
        int amt;
        cout<<"Enter amount to deposit :"<<endl;
        cin>>amt;
        balance-=amt;
        cout<<"Amount you have to Repay is "<<balance<<endl;
    };
};
int main()
{
    Saving* sp;
    Saving S1(1234,"Yash",5000);
    Loan L1(5678,"Omkar",5000);
 
    sp = &L1;
    sp->withdraw();

    return 0;
}