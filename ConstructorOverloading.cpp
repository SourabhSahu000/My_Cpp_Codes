#include<iostream>
#include<string>
using namespace std;

class Adhar
{
    //datamembers
    string consType;
    string name;
    string DOB;
    string adharNo;
    string father;
    string address;
    string VID;

    public:
    //default constructor
    Adhar()
    {
        consType="Default Constructor";
        name=" ";
        DOB=" ";
        adharNo =" ";
        father=" ";
        address=" ";
        VID=" ";
    }

    // parameterised constructor

    Adhar(string Name)
    {
        consType="Parameterised constructor with string";
        name=Name;
        DOB=" ";
        adharNo =" ";
        father=" ";
        address=" ";
        VID=" ";
    }

    Adhar(string dob)
    {
        consType="Parameterised constructor with string";
        name=" ";
        DOB=dob;
        adharNo =" ";
        father=" ";
        address=" ";
        VID=" ";
    }

    Adhar(string AdharNo)
    {
        consType="Parameterised constructor with string";
        name=" ";
        DOB=" ";
        adharNo =AdharNo;
        father=" ";
        address=" ";
        VID=" ";
    }

    Adhar(string Father)
    {
        consType="Parameterised constructor with string";
        name=" ";
        DOB=" ";
        adharNo =" ";
        father=Father;
        address=" ";
        VID=" ";
    }

    Adhar(string Address)
    {
        consType="Parameterised constructor with string";
        name=" ";
        DOB=" ";
        adharNo = " ";
        father=" ";
        address=Address;
        VID=" ";
    }


    Adhar(string vid)
    {
        consType="Parameterised constructor with string";
        name=" ";
        DOB=" ";
        adharNo =" ";
        father=" ";
        address=" ";
        VID =vid;
    }

    void show()
    {
        cout<<"---------------------Govt. of INDIA------------------------";
        cout<<consType<<endl;
        cout<<"name="<<name<<endl;
        cout<<"DOB="<<DOB<<endl;
        cout<<"adharNo="<<adharNo<<endl;
        cout<<"father="<<father<<endl;
        cout<<"address="<<address<<endl;
        cout<<"VID ="<<VID<<endl;
    }
};

int main()
{
    //create class object
    Adhar a1,a2("Sourabh_Sahu"),a3("25-07-2005"),a4("752105168664"),a5("Kanhaiya_Lal_Sahu"),a6("06,gariyawas,Udaipur,Rajasthan"),a7("9102268300047635");

    //call show function
    a1.show();
    a2.show();
    a3.show();
    a4.show();
    a5.show();
    a6.show();
    a7.show();
    return 0;
}