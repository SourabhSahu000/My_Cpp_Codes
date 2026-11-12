#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f1;
    f1.open("EmpTwo.txt",ios::in);
    string name;
    cout<<"Data from file";
    while(f1)
    {
        f1>>name;
        cout<<endl<<name;
    }

    f1.close();

    return 0;
}