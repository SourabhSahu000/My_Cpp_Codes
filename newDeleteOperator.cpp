#include<iostream>
using namespace std;

int main()
{
    //dynamic memory allocation for int
    int* ptrInt = new int;
    *ptrInt = 10;
    cout<<"ptrInt="<<ptrInt<<endl;
    cout<<"Before delete: *ptrInt ="<<*ptrInt<<endl;
    delete ptrInt;
    cout<<"After delete: *ptrInt ="<<*ptrInt<<endl;

    //dynamic memory allocation for array
    int* ptrIntArr = new int[5];
    ptrIntArr[0] = 10;
    ptrIntArr[1] = 20;
    ptrIntArr[2] = 30;
    ptrIntArr[3] = 40;
    ptrIntArr[4] = 50;

   for(int i = 0; i < 5; i++)
{
    cout << "ptrIntArr[" << i << "] = " << ptrIntArr[i] << endl;
}

    
    delete[] ptrIntArr;
    for (int i=0;i<5;i++)
    {
        cout<<"After delete : *ptrIntArr["<<i<<"] ="<<(*ptrIntArr+i)<<endl;
    }
}