#include <iostream>
using namespace std;

class person
{
    string name;
    int age;

public:
    void addPersonInfo(){
        cout << "Enter Patient Name and Patient Age: ";
        cin >> name >> age;
    }

    void showPersonInfo(){
        cout << "Patient Name=" << name << " and Patient Age=" << age << endl;
    }
};

class doctor
{
    string specialization;
    int experience;

public:
    void addDoctorInfo(){
        cout << "Enter Doctor's Specialization and Experience: ";
        cin >> specialization >> experience;
    }

    void showDoctorInfo(){
        cout << "Doctor's Specialization=" << specialization<< " and Experience=" << experience << " years" << endl;
    }
};

class headDoctor : public doctor , public person
{
    string department;
    int wardNo;

public:
    void addHeadDoctorInfo(){
        cout << "Enter Head Doctor's Department and Ward No: ";
        cin >> department >> wardNo;
    }

    void showHeadDoctorInfo(){
        cout << "Head Doctor's Department=" << department<< " and Ward No=" << wardNo << endl;
    }
};

int main(){

    // object of person class
    person p1;
    p1.addPersonInfo();
    p1.showPersonInfo();

    // object of doctor class
    doctor d1;
    d1.addDoctorInfo();
    d1.showDoctorInfo();

    // object of headDoctor class
    headDoctor h1;
    h1.addHeadDoctorInfo();
    h1.showHeadDoctorInfo();
    h1.addDoctorInfo();
    h1.showDoctorInfo();
    h1.addPersonInfo();
    h1.showPersonInfo();

    return 0;
}
