#include<iostream>
using namespace std;

int main()
{
    //dynamic memory allocation for float
    float* ptrFloat = new float;
    *ptrFloat = 3.1434;
    cout<<"ptrFloat="<<ptrFloat<<endl;
    cout<<"Before delete: *ptrFloat ="<<*ptrFloat<<endl;
    delete ptrFloat;
    cout<<"After delete: *ptrFloat ="<<*ptrFloat<<endl;

    //dynamic memory allocation for char
    char* ptrChar = new char;
    *ptrChar = 74;
    cout<<"ptrChar="<<ptrChar<<endl;
    cout<<"Before delete: *ptrChar ="<<*ptrChar<<endl;
    delete ptrChar;
    cout<<"After delete: *ptrChar ="<<*ptrChar<<endl;

     //dynamic memory allocation for boolean
    bool* ptrBool = new bool;
    *ptrBool = 0;
    cout<<"ptrBool="<<ptrBool<<endl;
    cout<<"Before delete: *ptrBool ="<<*ptrBool<<endl;
    delete ptrBool;
    cout<<"After delete: *ptrBool ="<<*ptrBool<<endl;

    return 0;
}