#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s;
    int n,val;

    cout<<"Enter number of elements : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>val;
        s.insert(val);    //duplicates will be ignored
    }

    cout<<"Set elements are : ";
    for(int x : s)
    {
        cout<<x<<" ";
    }

    cout<<"Value :"<<val;

    return 0;
}