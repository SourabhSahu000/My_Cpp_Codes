#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <string> cars = {"Volvo","BMW","Ford","Mazda"};

    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Volvo");
    cars.insert("Ford");
    cars.insert("Toyota");
    cars.insert("Audi");

    cars.erase("Volvo");
    cars.erase("Mazda");

    for(string car : cars)
    cout<<car<<"\n";

    return 0;
}