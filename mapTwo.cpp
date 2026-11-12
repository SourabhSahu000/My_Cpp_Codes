#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> mp = {
        {"one", 1},
        {"two", 2},
        {"three", 3}
    };

    for (auto a : mp)
    {
        cout << "Key: " << a.first
             << ", Value: " << a.second << endl;
    }

    return 0;
}