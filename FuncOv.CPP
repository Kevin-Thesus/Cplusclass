//Exam Of Function Overloading //
#include<iostream>
using namespace std;
class maTh{

public:
    int muTi(int a, int b){
    int c = a*b;
    cout<<"The Value Of C :"<<c<<endl;
    }
    int muTi(float d,float e){
    float f = d*e;
    cout<<"The Value Of F :"<<f<<endl;
    }
    int muTi(double g, double h){
    double i = g*h;
    cout<<"The Value Of I :"<<i<<endl;
    }

};
int main(){
maTh obj;
obj.muTi(4,4);
obj.muTi(2.2,2.2);
obj.muTi(2.42,2.42);
return 0;
}
