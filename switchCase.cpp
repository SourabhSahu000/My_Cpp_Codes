#include<iostream>
using namespace std;

class CityInfo
{
    string Details;
    char cityname;

    public:
    void addCityName()
    {
        cout<<"Enter City Name :\nPress A for Indore\nPress B for Bhopal\n Press C for ujjain"<<endl;
        cin>>cityname;
    }

    void showCityDetails()
    {
        switch(cityname)
        {
            case 'A':
            Details="Indore, the largest city of Madhya Pradesh, blends rich history with modern vibrancy. Known for its clean streets, bustling markets, and delicious street food, it is India’s cleanest city. With landmarks like Rajwada Palace and Lal Bagh, Indore thrives as a hub of education, commerce, and cultural heritage.";
            break;
            case 'B':
            Details="Bhopal, the capital of Madhya Pradesh, is famed for its serene lakes and cultural charm. Known as the “City of Lakes,” it balances natural beauty with historic landmarks like Taj-ul-Masajid and Shaukat Mahal. A hub of art, heritage, and governance, Bhopal thrives with vibrant traditions and modern development.";
            break;
            case 'C':
            Details="Ujjain, one of India’s oldest cities, is revered as a major spiritual hub. Situated on the banks of the Shipra River, it hosts the famous Kumbh Mela. With landmarks like Mahakaleshwar Jyotirlinga and Kal Bhairav Temple, Ujjain blends mythology, devotion, and heritage, attracting pilgrims and history enthusiasts alike.";
            break;
            default:
            Details="Please enter correct city in our list";
            break;
        }
        cout<<"Details: "<<Details<<endl;
    }
};

int main()
{
    //create class object
    CityInfo C1;
    insert:
    int Configuration;
    cout<<"Enter 1 for find details and 0 for exit :"<<endl;
    cin>>Configuration;
    if(Configuration==1)
    {
        C1.addCityName();
        C1.showCityDetails();
        goto insert;
    }
    else
    {
        cout<<"Thanks for visiting !!!!!!!!!!!!!!!!"<<endl;
        exit(0);
    }
}