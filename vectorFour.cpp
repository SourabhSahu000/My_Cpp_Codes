#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,4,5,6,7};

    cout<<endl<<"v =";
    for(int x:v)
    cout<<x<<" ";

    v.insert(v.begin() + 2,9);    //insert 9 at index 2
    v[0]=34;

    cout<<endl<<"Before erase :";
    for (int x:v)
    cout<<x<<" ";

    v.erase(v.begin() + 3);  //erase element at index 3

    cout<<endl<<"After erase :";
    for(int x:v)
    cout<<x<<" ";

    return 0;
}