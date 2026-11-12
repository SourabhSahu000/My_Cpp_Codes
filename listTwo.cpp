#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1;
    list <int> l3 = {1,2,3,4,5};
    l1.assign(3,50);
    cout<<endl<<"\nl1 size :"<<l1.size();
    cout<<endl<<"Front of l3 is "<<l3.front()<<" and Back of l3 is "<<l3.back()<<endl;

    cout<<"l3 : ";
    for(int i:l3)
    cout<<i<<" ";
    cout<<endl;

    //modifires
    l3.push_front(10);  //(10,1,2,3,4,5)
    cout<<"l3 : ";
    for(int i : l3)
    cout<<i<<" ";
    cout<<endl;

    l3.push_back(20);  //(10,1,2,3,4,5,20)
    cout<<"l3 : ";
    for(int i : l3)
    cout<<i<<" ";
    cout<<endl;

    l3.pop_front();   //(1,2,3,4,5,20)
    cout<<"l3 : ";
    for(int i : l3)
    cout<<i<<" ";
    cout<<endl;

    l3.pop_back();  //(1,2,3,4,5)
    cout<<"l3 : ";
    for(int i : l3)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}