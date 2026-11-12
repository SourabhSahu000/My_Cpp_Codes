#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> people = {
        {"India", 32},
        {"America", 45},
        {"Japan", 29}
    };

    people.insert({"USA", 22});
    people.insert({"Dubai", 24});
    people.insert({"Spain", 20});
    people.insert({"Nigeria", 30});

    // Display all key-value pairs
    for (auto a : people)
    {
        cout << "Key : " << a.first
             << " , Value : " << a.second << endl;
    }

    cout << endl;
    cout << "America is : " << people.at("America") << "\n";
    cout << "Spain is   : " << people.at("Spain") << "\n";

    return 0;
}
