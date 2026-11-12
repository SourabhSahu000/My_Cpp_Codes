#include<iostream>
using namespace std;

class Myarray
{
    //int IntArr[5]={1,45,34,65,32};
    int size;

    public:
    void addSize()
    {
        cout<<"Enter array size :"<<endl;
        cin>>size;
    }
    void arrDetails()
    {
    int arr[size];
    //add array elements
    for(int i=0;i<size;i++)
    {
        cout<<"Enter elements of array ["<<i<<"]="<<endl;
        cin>>arr[i];
    }
    //show elements
    for(int i=0;i<size;i++)
    {
        cout<<"array ["<<i<<"]="<<arr[i]<<endl;
    }
    }
};

int main()
{
    Myarray arrObj;
    arrObj.addSize();
    arrObj.arrDetails();
}