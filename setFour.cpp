#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <string> cars;
    cout<<"\nCars : "<<cars.empty();  //output 1 (set is empty)

    set <string> cars1 ={"Volvo","BMW","Ford","Mazda"};
    cout<<"\nCars 1 size : "<<cars1.size();

    cout<<"\nCars 1 : ";
    for (string car:cars1)
    cout<<car<<"\n";

    cars1.clear();
    cout<<"\nCars 1 :";
    for (string car:cars1)
    cout<<car<<"\n";

    return 0;
}