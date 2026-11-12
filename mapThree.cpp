#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> mp;

    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    cout << "Key: one, Value: " << mp["one"] << endl;
    cout << "Key: two, Value: " << mp["two"] << endl;
    cout << "Key: three, Value: " << mp["three"] << endl;

    // Check if a key is in the map
    if (mp.count("four") > 0)
    {
        cout << "Key 'four' is in the map" << endl;
    }
    else
    {
        cout << "Key 'four' is not in the map" << endl;
    }

    return 0;
}
