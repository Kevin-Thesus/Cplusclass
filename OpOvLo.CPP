//Example Of Operator Overloading//
#include<iostream>
using namespace std;
class Circle{
public:
    int radius;
    float pi;
    Circle(int raDi,float Pi){

        radius = raDi;
        pi = Pi;

    }
    void area(){
    cout<<radius*pi<<endl;
    }
    void perimeter(){
    cout<<2*pi*radius<<endl;
    }
    Circle operator++(int){
    radius++;
    }
    Circle operator--(int){
    radius--;
    }
    };
    int main(){
    Circle c(4,3.14);
    c.area();
    c++;
    c.area();
    c--;
    c.perimeter();
    c++;
    c.perimeter();
    c--;
    return 0;
    }
