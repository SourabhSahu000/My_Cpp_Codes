// publicPrivateInheritanceEx
#include<iostream>
using namespace std;

class Employee
{ 
    private: 
    char name[25];
    int empid;
    
    public:
    void print()
    {
        cout<<"Company Name : ABC Pvt. Ltd. \t\t";
        cout<<"Address : Delhi";
    }
    void input()
    {
        cout<<endl<<"Enter name :";
        cin>>name;
        cout<<endl<<"Enter employee ID :";
        cin>>empid;
    }

    void display()
    {
        cout<<endl<<"Name :"<<name;
        cout<<endl<<"Employee ID :"<<empid;
    }
};

class Manager : public Employee
{
    private:
    char grade[10];
    int cellNo;

    public:
    void input()
    {
        Employee::input();
        cout<<endl<<"Enter grade :";
        cin>>grade;
        cout<<endl<<"Enter cell number :";
        cin>>cellNo;
    }

    void display()
    {
        Employee::display();
        cout<<endl<<"Grade :"<<grade;
        cout<<endl<<"Cell No :"<<cellNo;
    }
};

class Executive : private Employee
{
    private:
    long int pNo;
    
    public:
    void input()
    {
        Employee::input();
        cout<<endl<<"Pager No :";
        cin>>pNo;
    }

    void display()
    {
        Employee::display();
        cout<<endl<<"Pager No :"<<pNo;
    }
};

int main()
{
    Manager m1;
    Executive e1;

    m1.print();
    cout<<endl<<"Enter data of manager :";
    m1.input();

    // e1.print(); => Not accessible hence will give error
    cout<<endl<<"Enter data for executive :";
    e1.input();

    cout<<endl<<"Data of manager :";
    m1.display();
    cout<<endl<<"Data of executive :";
    e1.display();

    return 0;
}