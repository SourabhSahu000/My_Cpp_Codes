#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <string> car ={"Alto","Desire","WagonR","Nano"};

    cout<<endl<<"Size of vector before : "<<car.size();
    car[1]="i10";
    car.insert(car.begin() + 1,"celerio");

    car.push_back("Swift");
    cout<<endl<<"Size of vector after : "<<car.size();

    cout<<endl<<"Using for-each loop :";
    for(string s : car)
    cout<<s<<" ";

    cout<<endl<<"Using for loop :";
    for(int i=0;i<car.size();i++)
    {
        cout<<endl<<"Vector ["<<i<<"] :"<<car[i];
    }

    return 0;
}