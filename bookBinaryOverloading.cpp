#include<iostream>
using namespace std;

class Salary
{
    public:
    float basic,bonus;

    Salary(float x,float y);

    Salary operator+(Salary);//This declares operator+ Which takes a parameter 
                             //of type Salary and returns an object of type Salary.  
};

   Salary :: Salary(float x,float y)
    {
        basic=x;
        bonus=y;
    }

Salary Salary :: operator+(Salary salaryTemp)
//returnType class :: overloading (parameter rightHandObject)
{
    float TotalBasic,TotalBonus;
    TotalBasic=basic+salaryTemp.basic;
    TotalBonus=bonus+salaryTemp.bonus;

    return Salary(TotalBasic,TotalBonus);
}

int main()
{
    Salary salaryJan(2000.00,670.00);
    Salary salaryFeb(2000.00,800.00);
    Salary totalSalary(0.00,0.00);

    totalSalary=salaryJan+salaryFeb;
    cout<<"\nTotal basic salary is "<<totalSalary.basic;
    cout<<"\nTotal bonus is "<<totalSalary.bonus;

    return 0;
}

// In the above program, 'Salary operator+(Salary)' declare the operator+.
// This function has a return type of Salary and takes one parameter of type Salary.
// Although the purpose of operator is to add two objects, it accepts only one argument. 

// The reason is the way in which the compiler treats this function. 
// When the compiler encounters a statement such as "Total salary = salaryJAn + salaryFeb";
// automatically execute the member function operator+() of the salaryJan object and pass the 
// object salaryFeb to the operator function.   
// In fact, the compiler translates this code as : totalSalary=salaryJan.operator+(salaryFeb)
// So, operator+(salaryFeb) is treated as a member function of salaryJan, 
// hence there is no need to pass the data member of salaryJan. 