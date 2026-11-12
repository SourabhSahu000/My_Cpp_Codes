#include<iostream> //exceptionVoting
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    try
    {
        cout << "Enter your age: ";
        cin >> age;

        if (age < 18)
            throw age;
        else
            cout << "You are eligible for voting." << endl;

        cin.ignore();
        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Welcome " << name << ", you can vote now." << endl;
    }
    catch (int x)
    {
        cout << "You are not eligible for voting." << endl;
    }

    return 0;
}