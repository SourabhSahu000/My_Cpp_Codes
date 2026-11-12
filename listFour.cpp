#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l = {30,10,40,50,20};
    cout<<endl<<"Before sorting : ";
    for(int x:l)
    cout<<x<<" ";

    l.sort();  //10,20,30,40,50
    cout<<endl<<"After sorting : ";
    for(int x:l)
    cout<<x<<" ";

    cout<<endl<<"After reverse : ";
    l.reverse();  //50,40,30,20,10
    for(int x:l)
    cout<<x<<" ";

    cout<<endl<<"After removal : ";
    l.remove(30);   //remove all 30
    for(int x:l)
    cout<<x<<" ";

    return 0;
}