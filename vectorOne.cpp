#include<iostream> //vectorOne
#include<vector>
using namespace std;

int main()
{
    vector <int> V1;
    vector <int> V2(5,10);
    vector <int> V3={1,2,3,4};

    cout<<endl<<"Vector 1 :";
    for(int x : V1)
    {
        cout<<x<<" ";
    }

    cout<<endl<<"Vector 2 :";
    for(int x : V2)
    {
        cout<<x<<" ";
    }

    cout<<endl<<"Vector 3 :";
    for(int x : V3)
    {
        cout<<x<<" ";
    }

    return 0;
}