//Class And Object Code example 1//
#include<iostream>
using namespace std;
class ariTHop {
    public:
int a,b,c;
};
int main(){
ariTHop nuM1;
nuM1.a = 4;
nuM1.b = 2;
nuM1.c = nuM1.a+nuM1.b;
nuM1.c = nuM1.a-nuM1.b;
nuM1.c = nuM1.a*nuM1.b;
nuM1.c = nuM1.a/nuM1.b;
nuM1.c = nuM1.a%nuM1.b;
cout<<"The Value Of C : "<<nuM1.c<<endl;
}
