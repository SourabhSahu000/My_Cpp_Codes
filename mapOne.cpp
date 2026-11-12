#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    //create a map string to integer
    map <string,int> mp;
    mp["Durgesh"]=1;
    mp["Ganesh"]=2;
    mp["Bhavesh"]=3;
    mp["Chetan"]=4;
    mp["Aakash"]=5;
    mp["Bhavesh"]+=5;

    map <string,int> :: iterator it = mp.begin();
    //for (it =mp.begin();it != mp.end();it++)
    while(it !=mp.end())
    {
        cout<<"Key : "<<it->first<<", value : "<<it->second<<endl;
        it++;
    }

    cout<<endl<<"Size of map :"<<mp.size();

    return 0;
}