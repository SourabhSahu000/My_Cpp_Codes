#include<iostream> //vectorTwo
#include<vector>
using namespace std;

int main()
{
    vector <int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout<< v[0] << endl;       //10
    cout<< v.at(1) << endl;    //20
    cout<< v.front() <<endl;   //first element
    cout<<v.back() <<endl;     //last element

    cout<< "Size : "<< v.size() <<endl;
    cout<<"Capacity :"<<v.capacity() <<endl;

    return 0;
}