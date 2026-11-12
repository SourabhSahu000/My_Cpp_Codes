#include<iostream> //vectorThree
#include<vector>
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5};
    v.push_back(6);

    //using iterator
    cout<<endl<<"Using iterator :";
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<< *it << " ";
    }

    cout<<endl<<"Using for-each (range based for loop) loop :";
    for(int x : v)
    cout<< x << " ";

    return 0;
}