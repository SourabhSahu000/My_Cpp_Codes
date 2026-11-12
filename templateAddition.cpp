#include<iostream>
using namespace std;

template <typename T,typename R> 
void add(T a,R b)
{
    cout<<"Addition is : "<<a+b<<endl;
}
int main()
{
    add <int,int> (5,5);
    add <int,float> (5,5.2);
    add <float,int> (5.3,5);
    add <float,float> (5.4,5.5);

    return 0;
}