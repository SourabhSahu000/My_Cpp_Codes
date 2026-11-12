#include <iostream>
#include <string>
using namespace std;

// Base Class
class SuperClass {
    string ClassName;
    string ClassType;

public:
    // Constructor
    SuperClass(string ClassName = "", string ClassType = "") {
        this->ClassName = ClassName;
        this->ClassType = ClassType;
    }

    void show() {
        cout << "This is SuperClass show function" << endl;
        cout << "ClassName is " << ClassName
             << " and ClassType is " << ClassType << endl;
    }
};

// Derived Class
class SubClass : public SuperClass {
    string _ClassName;
    string _ClassType;

public:
    // Default Constructor
    SubClass() : SuperClass("Parent", "Parent Type") {
        _ClassName = "";
        _ClassType = "";
    }

    // Parameterized Constructor
    SubClass(string _ClassName, string _ClassType) {
        this->_ClassName = _ClassName;
        this->_ClassType = _ClassType;
    }

    void show() {
        cout << "This is SubClass show function" << endl;
        cout << "ClassName is " << _ClassName
             << " and ClassType is " << _ClassType << endl;
    }
};

int main() {
    // Create subclass object
    SubClass objSub("Sub Class", "Child Type");
    objSub.show();

    // Create superclass object
    SuperClass objSup("Super Class", "Base Type");
    objSup.show();

    // Call again
    objSub.show();

    return 0;
}
