#include <iostream>
using namespace std;

class Time{
    int hours;
    int minutes;
    string OperatorType;

public:
    // create constructor
    Time(int hours = 0, int minutes = 0){
        this->hours = hours;
        this->minutes = minutes;
    }

    // for prefix ++ operator
    void operator++(){
        OperatorType = "prefix ++";
        ++minutes;
        if(minutes >= 60){
            ++hours;
            minutes = minutes - 60;
        }
    }

    // for postfix ++ operator
    void operator++(int){
        OperatorType = "postfix ++";
        ++minutes;
        if(minutes >= 60){
            ++hours;
            minutes = minutes - 60;
        }
    }

    // for prefix -- operator
    void operator--(){
        OperatorType = "prefix --";
        --minutes;
        if(minutes < 0){
            --hours;
            minutes = minutes + 60;
        }
    }

    // for postfix -- operator
    void operator--(int){
        OperatorType = "postfix --";
        minutes--;
        if(minutes < 0){
            hours--;
            minutes = minutes + 60;
        }
    }

    void showTime(){
        cout << "--------- (" << OperatorType << ") ---------" << endl;
        cout << "Hours: " << hours << " and minutes: " << minutes << endl;
    }
};

int main(){
    // class object
    Time t1(13, 59);
    t1.showTime();

    ++t1;
    t1.showTime();

    t1++;
    t1.showTime();

    --t1;
    t1.showTime();

    t1--;
    t1.showTime();
}
