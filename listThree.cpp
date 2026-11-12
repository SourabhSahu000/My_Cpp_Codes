#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <string> names = {"Akash","Bhavesh","Vijay","Rahul"};
    for(string n:names)
    cout<<n<<" ";
    cout<<endl;
    //Add an element at the beginning
    names.push_front("Tushar");

    //Add element at the end
    names.push_back("Nikhil");

    //print list elements
    for(string n:names)
    cout<<n<<" ";

    return 0;
}