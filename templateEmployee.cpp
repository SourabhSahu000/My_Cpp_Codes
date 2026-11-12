#include <iostream> //templateEmployee
#include<string>
using namespace std;

template<typename T1,typename T2,typename T3>
class Employee
{
    private:
    T1 id;
    T2 salary;
    T3 name;

    public:
    void input(T1 i, T2 s, T3 n)
    {
        id=i;
        salary=s;
        name=n;
    }

    void display()
    {
       cout << "ID: " << id << endl;
       cout << "Name: " << name << endl;
       cout << "Salary: " << salary << endl;
    }
};

int main()
{
    int id;
    float salary;
    string name;

    cout<<endl<<"Enter employee id : ";
    cin>>id;
    cout<<endl<<"Enter employee salary : ";
    cin>>salary;
    cout<<endl<<"Enter employee name : ";
    cin>>name;

    Employee <int,float,string> e1;
    e1.input(id,salary,name);
    e1.display();

    return 0;
}