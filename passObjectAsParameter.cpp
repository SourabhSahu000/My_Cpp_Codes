#include<iostream>
using namespace std;

class Marks
{
    //Create data member
    public:
    int num;
    //create constructor
    Marks (int num)
    {
        this->num=num;
    }
    //create copy constructor
    Marks(Marks const& obj)
    {
        this->num=obj.num;
    }
};

//void Totalmarks (Marks s1,Marks s2,Marks s3,Marks s4,Marks s5)
//{
   //cout<<"total="<<(s1.num+s2.num+s3.num+s4.num+s5.num);
//}

Marks Totalmarks(Marks s1,Marks s2,Marks s3,Marks s4,Marks s5)
{
    Marks total=s1.num+s2.num+s3.num+s4.num+s5.num;
    return total;
}

int main()
{
    Marks Maths(90),Hindi(78),English(70),Sanskrit(50),Science(100);
    Marks t=Totalmarks(Maths,Hindi,English,Sanskrit,Science);
    cout<<"total="<<t.num<<endl;
    cout<<"total="<<Totalmarks(Maths,Hindi,English,Sanskrit,Science).num;
}