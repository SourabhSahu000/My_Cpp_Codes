#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream f1;
    f1.open("EmpOne.txt",ios::out);
    f1<<"Welcome to file handeling";
    f1<<"\nSir ne jo bola kuch yaad nahi hai";
    cout<<"THe data is stored successfully";
    f1.close();

    return 0;
}