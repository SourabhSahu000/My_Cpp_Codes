#include<iostream>
using namespace std;
class outerClass
{
    string carName;
    string fuelType;
    string transmission;
    string power;
    string torque;

    public:
    void carDetails()
    {
        cout<<"Enter car name ="<<endl;
        cin>>carName;
        cout<<"Enter car fuel type ="<<endl;
        cin>>fuelType;
        cout<<"Enter about transmission ="<<endl;
        cin>>transmission;
        cout<<"Enter power details="<<endl;
        cin>>power;
        cout<<"Enter torque ="<<endl;
        cin>>torque;

        cout<<"-----------------Car Details-----------------------"<<endl;
        cout<<"Car Name="<<carName<<endl;
        cout<<"Fuel type="<<fuelType<<endl;
        cout<<"Transmission="<<transmission<<endl;
        cout<<"Power="<<power<<endl;
        cout<<"Torque="<<torque<<endl;
    }

    class innerClass
    {
        string engine;

        public:
        void engineDetails()
        {
        cout<<"Enter engine details ="<<endl;
        cin>>engine;

        cout<<"----------------Engine----------------------------"<<endl;
        cout<<" "<<engine<<endl;
        }
    };
};

int main()
{
    outerClass OC1;
    OC1.carDetails();

    outerClass::innerClass IC1;
    IC1.engineDetails();

    return 0;

}