#include<iostream>
using namespace std;

class student
{
    string studentName;
    int studentID;

    public:
    void addStudentInfo()
    {
        cout<<"Enter student Name="<<endl;
        cin>>studentName;
        cout<<"Enter student ID="<<endl;
        cin>>studentID;
    }

    void showStudentInfo()
    {
        cout<<"Student Name="<<studentName<<" and Student ID="<<studentID<<endl;
    }
};
class teacher : public student
{
    string teacherName,Designation;

    public:
    void addInfo()
    {
        cout<<"Enter teacher Name ="<<endl;
        cin>>teacherName;
        cout<<"Designation="<<endl;
        cin>>Designation;
    }

    void showInfo()
    {
        cout<<"Teacher Name ="<<teacherName<<" and Designation ="<<Designation<<endl;
    }
};
class HOD : public teacher
{
    string Name;
    string Department;

    public:
    void addHODInfo()
    {
        cout<<"Enter name="<<endl;
        cin>>Name;
        cout<<"Department ="<<endl;
        cin>>Department;
    }

    void showHODInfo()
    {
        cout<<"name ="<<Name<<" and Department ="<<Department<<endl;
    }
};

int main()
{
    //create class object for student class
    student std1;
    std1.addStudentInfo();
    std1.showStudentInfo();

    //create class object for teacher class
    teacher tech1;
    tech1.addInfo();
    tech1.showInfo();
    tech1.addStudentInfo();
    tech1.showStudentInfo();

    //create class object for HOD class
    HOD h1;
    h1.addHODInfo();
    h1.showHODInfo();
    h1.addInfo();
    h1.showInfo();
    h1.addStudentInfo();
    h1.showStudentInfo();
}