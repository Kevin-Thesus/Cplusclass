//Default Constructor Example 2//
#include<iostream>
using namespace std;
class rectangle{
private:
    int width;
    int height;
public:
    rectangle(){
    width = 5;
    height = 5;
    }
    void display(){
    cout<<" The Width is : "<<width<<endl;
    cout<<"The Height is : "<<height<<endl;
    }
};
int main(){
rectangle obj1;
obj1.display();
return 0;
}
