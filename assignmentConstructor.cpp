#include<iostream>
#include<string>
using namespace std;

class Car
{
    string ConstructorType;
    string Specification;
    string Manufacturer;
    string Country_of_Origin;
    string Car_Type;
    string Engine_Type;
    string Displacement;
    string Total_Horsepower;
    string Max_Torque;
    string Drivetrain;
    string Transmission;
    string Top_Speed;
    string Fuel_Type;
    string Weight;
    string Chassis_Material;
    string Drive_Modes;
    string Aerodynamics;
    string Braking_System;
    string Base_Price;

    public:

    Car()
    {
        //Default Constructor
        ConstructorType = "Default Constructor";
        Specification = "";
        Manufacturer = "";
        Country_of_Origin = "";
        Car_Type = "";
        Engine_Type = "";
        Displacement = "";
        Total_Horsepower = "";
        Max_Torque = "";
        Drivetrain = "";
        Transmission = "";
        Top_Speed = "";
        Fuel_Type = "";
        Weight = "";
        Chassis_Material = "";
        Drive_Modes = "";
        Aerodynamics = "";
        Braking_System = "";
        Base_Price = "";
    }

    Car(string Specification , string Manufacturer, string Country_of_Origin, string Car_Type, string Engine_Type,
        string Displacement, string Total_Horsepower,string Max_Torque, string Drivetrain, string Transmission,string Top_Speed,string Fuel_Type,
        string Weight,string Chassis_Material,string Drive_Modes,string Aerodynamics,string Braking_System,string Base_Price)
    {
        ConstructorType="Parameterised Constructor";
        this->Specification = Specification ;
        this->Manufacturer = Manufacturer;
        this->Country_of_Origin = Country_of_Origin;
        this->Car_Type = Car_Type;
        this->Engine_Type = Engine_Type;
        this->Displacement = Displacement;
        this->Total_Horsepower = Total_Horsepower;
        this->Max_Torque = Max_Torque;
        this->Drivetrain = Drivetrain;
        this->Transmission = Transmission;
        this->Top_Speed = Top_Speed;
        this->Fuel_Type = Fuel_Type;
        this->Weight = Weight;
        this->Chassis_Material = Chassis_Material;
        this->Drive_Modes = Drive_Modes;
        this->Aerodynamics = Aerodynamics;
        this->Braking_System = Braking_System;
        this->Base_Price = Base_Price;
    }

    Car(Car const& obj)
    {
        ConstructorType="Copy Constructor";
        this->Specification = obj.Specification ;
        this->Manufacturer = obj.Manufacturer;
        this->Country_of_Origin = obj.Country_of_Origin;
        this->Car_Type = obj.Car_Type;
        this->Engine_Type = obj.Engine_Type;
        this->Displacement = obj.Displacement;
        this->Total_Horsepower = obj.Total_Horsepower;
        this->Max_Torque = obj.Max_Torque;
        this->Drivetrain = obj.Drivetrain;
        this->Transmission = obj.Transmission;
        this->Top_Speed = obj.Top_Speed;
        this->Fuel_Type = obj.Fuel_Type;
        this->Weight = obj.Weight;
        this->Chassis_Material = obj.Chassis_Material;
        this->Drive_Modes = obj.Drive_Modes;
        this->Aerodynamics = obj.Aerodynamics;
        this->Braking_System = obj.Braking_System;
        this->Base_Price = obj.Base_Price;
    }


    void showDetails()
    {
        cout<<"------------------------Car Details("<<ConstructorType<<")-----------------------"<<endl;
        cout<<"Specification ="<<Specification<<endl;
        cout<<" Manufacturer ="<<Manufacturer<<endl;
        cout<<"Country of Origin ="<<Country_of_Origin<<endl;
        cout<<"Car Type ="<<Car_Type<<endl;
        cout<<"Engine Type ="<<Engine_Type<<endl;
        cout<<"Displacement ="<<Displacement<<endl;
        cout<<"Total Horsepower ="<<Total_Horsepower<<endl;
        cout<<"Max Torque ="<<Max_Torque<<endl;
        cout<<"Drivetrain ="<<Drivetrain<<endl;
        cout<<"Transmission ="<<Transmission<<endl;
        cout<<"Top Speed ="<<Top_Speed<<endl;
        cout<<"Fuel Type ="<<Fuel_Type<<endl;
        cout<<"Weight ="<<Weight<<endl;
        cout<<"Chassis Material ="<<Chassis_Material<<endl;
        cout<<"Drive Modes ="<<Drive_Modes<<endl;
        cout<<"Aerodynamics ="<<Aerodynamics<<endl;
        cout<<"Braking System ="<<Braking_System<<endl;
        cout<<"Base Price="<<Base_Price<<endl;
    }
};

int main()
{
    Car C1,C2("Ferrari SF90 Stradale","Ferrari","Italy","Plug-in_Hybrid_Supercar","4.0L Twin-Turbo V8 + 3 E-motors","3990 cc","986 hp",
    "800 Nm","All-Wheel Drive (AWD)","8-Speed Dual-Clutch Automatic","211 mph (340 km/h)","Petrol + Electric","1570 kg","Carbon Fiber & Aluminum",
"eDrive, Hybrid, Performance, Qualify","Active Aerodynamics (Shut-off Gurney)","Carbon-Ceramic Brakes","$625,000 USD"),
C3("Lamborghini Aventador SVJ","Lamborghini","Italy","V12 Supercar","6.5L Naturally Aspirated V12","6498 cc","759 hp","720 Nm",
    "All-Wheel Drive (AWD)","7-Speed ISR Automatic","217 mph (350 km/h)","Petrol Only","1525 kg","Carbon Fiber Monocoque","Strada, Sport, Corsa",
    "ALA 2.0 Active Aero","Carbon-Ceramic Brakes","$520,000 USD"),C4("Porsche 911 Turbo S","Porsche","Germany","Twin-Turbo Sports Car",
    "3.8L Twin-Turbo Flat-6","3745 cc","640 hp","800 Nm",    "All-Wheel Drive (AWD)","8-Speed PDK Automatic","205 mph (330 km/h)",
    "Petrol Only","1640 kg","Aluminum & Steel","Normal, Sport, Sport Plus",    "Active Rear Spoiler","Carbon-Ceramic Brakes","$230,000 USD");
    C1.showDetails();
    C2.showDetails();
    C3.showDetails();
    C4.showDetails();

    //Car c5(c3); 
    Car c5=C3;//call copy constructor and copy all values of c3 in c5

    c5.showDetails();
}