#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1;
    list <int> l2(5);       //all initialised to zero
    list <int> l3(5,100);   //all initialised to 100
    list <int> l4 = {10,20,30,40,50};
    list <int> l5(l4);

    cout<<"\n l1 elements :";
    for(int x:l1)
    cout<<x<<" ";

    cout<<"\n l2 elements :";
    for(int x:l2)
    cout<<x<<" ";
    
    cout<<"\n l3 elements :";
    for(int x:l3)
    cout<<x<<" ";

    cout<<"\n l4 elements :";
    for(int x:l4)
    cout<<x<<" ";

    cout<<"\n l5 elements :";
    for(int x:l5)
    cout<<x<<" ";

    return 0;
}