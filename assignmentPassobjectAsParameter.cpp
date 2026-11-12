#include<iostream>
using namespace std;

class Salary
{
    //Create data member
    public:
    int num;
    //create constructor
    Salary (int num)
    {
        this->num=num;
    }
    //create copy constructor
    Salary(Salary const& obj)
    {
        this->num=obj.num;
    }
};

//void Totalsalary (Salary s1,Salary s2,Salary s3,Salary s4,Salary s5)
//{
   //cout<<"total="<<(s1.num+s2.num+s3.num+s4.num+s5.num);
//}

Salary Totalsalary(Salary s1,Salary s2,Salary s3,Salary s4,Salary s5)
{
    Salary total=s1.num+s2.num+s3.num+s4.num+s5.num;
    return total;
}

int main()
{
    Salary Mohit(90000),Harsh(78000),Elvish(70000),Sanskar(50000),Sarthak(100000);
    Salary t=Totalsalary(Mohit,Harsh,Elvish,Sanskar,Sarthak);
    cout<<"total="<<t.num<<endl;
    cout<<"total="<<Totalsalary(Mohit,Harsh,Elvish,Sanskar,Sarthak).num;
    return 0;
}