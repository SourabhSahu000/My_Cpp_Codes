#include<iostream>
using namespace std;

class Time
{
    int hours,minutes;
    //create contructor
    public:
    Time(int h=0,int m=0)
    {
        hours=h;minutes=m;
    }

    Time operator+(Time const& obj)
    {
        Time response;
        response.hours=hours+obj.hours;
        response.minutes=minutes+obj.minutes;
        return response;
    }

    Time operator-(Time const& obj)
    {
        Time response;
        response.hours=hours-obj.hours;
        response.minutes=minutes-obj.minutes;
        return response;
    }

    void shoeDetails()
    {
        cout<<"H="<<hours<<" and M="<<minutes<<endl;
    }
};

int main()
{
    //create class instance
    Time t1(2,30),t2(2,15);
    t1.shoeDetails();
    t2.shoeDetails();

    //for + operator
    Time t3=t1+t2;
    t3.shoeDetails();

    //fpr - operator
    Time t4=t1-t2;
    t4.shoeDetails();

    return 0;
}