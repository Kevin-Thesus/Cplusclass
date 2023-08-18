//Default Constructor Example 3//
#include<iostream>
using namespace std;
class point{
private:
    int x;
    int y;
public:
    point(){
    x = 0;
    y = 0;
    }
    void display(){
    cout<<"The Coordinates are : "<<"("<<x<<","<<y<<")";
    }
};
int main(){
point obj1;
obj1.display();
return 0;
}
