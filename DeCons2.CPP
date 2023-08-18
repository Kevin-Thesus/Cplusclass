//Default Constructor Example 3//
#include<iostream>
using namespace std;
class Date{
private:
    int day;
    int month;
    float year;
public:
    Date(){
    day = 19;
    month = 13;
    year = 2000;
    }
    void display(){
    cout<<" The Date is : "<<day<<"/"<<month<<"/"<<year;
    }
    };
    int main(){
    Date obj3;
    obj3.display();
    return 0;
    }
