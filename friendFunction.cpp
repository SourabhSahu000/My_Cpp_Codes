#include <iostream>
using namespace std;

class marks{
    // private data member
    int num;

    // friend function declaration
    friend void totalMarks(marks const& o1,
                           marks const& o2,
                           marks const& o3);

public:
    // constructor
    marks(int num = 0){
        this->num = num;
    }

    // member function
    void show(){
        cout << "marks = " << num << endl;
    }
};

// friend function definition
void totalMarks(marks const& o1,
                marks const& o2,
                marks const& o3){
    cout << "Total Marks => "
         << (o1.num + o2.num + o3.num)
         << endl;
}

int main(){
    // class objects
    marks hindi(66), english(67), maths;

    totalMarks(hindi, english, maths);

    return 0;
}