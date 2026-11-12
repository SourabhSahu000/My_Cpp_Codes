#include <iostream>
#include <string>
using namespace std;

class MyDataType
{
    int intValue;
    char charValue;
    float floatValue;
    double doubleValue;
    string stringValue;
    bool booleanValue;

public:
    void details()
    {
        cout << "Enter int value: ";
        cin >> intValue;

        cout << "Enter char value: ";
        cin >> charValue;

        cout << "Enter float value: ";
        cin >> floatValue;

        cout << "Enter double value: ";
        cin >> doubleValue;

        cout << "Enter string value (single word): ";
        cin >> stringValue;

        cout << "Enter boolean value (0 or 1): ";
        cin >> booleanValue;

        cout << "\n----------- DETAILS -----------\n";
        cout << "int value = " << intValue << endl;
        cout << "char value = " << charValue << endl;
        cout << "float value = " << floatValue << endl;
        cout << "double value = " << doubleValue << endl;
        cout << "string value = " << stringValue << endl;
        cout << "boolean value = " << booleanValue << endl;
    }
};

int main()
{
    MyDataType dt1;
    dt1.details();
    return 0;
}
