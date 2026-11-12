#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <int> s;
    s.insert(23);
    s.insert(43);
    s.insert(2);
    s.insert(44);
    s.insert(22);
    s.insert(11);
    s.insert(33);
    s.insert(1);
    s.insert(99);
    s.insert(67);

    cout<<"Set elements : ";
    for(int x:s)
    cout<<x<< " ";

    return 0;
}