#include<iostream>
#include<string>
using namespace std;

class user
{
    string userName;
    int userID;
    static int userCount;//static data member

    public:
    user(string userName="",int userID=0)
    {
        this->userName=userName;
        this->userID=userID;
        this->userCount=userCount;
        userCount++;
    }

    void show()
    {
        cout<<"User Name= "<<userName<<" and User ID="<<userID<<endl;
    }

    static void showCount()
    {
        cout<<"usercount="<<userCount<<endl;
    }
};
int user::userCount=0;

int main()
{
    //creatre class object
    user u1("ram",101);
    u1.showCount();
    u1.show();

    user u2("roham",102);
    u2.show();

    user u3("kamal",103);
    u3.show();

    user::showCount();
    return 0;
}
