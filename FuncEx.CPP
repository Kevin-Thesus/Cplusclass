//Functions
#include<iostream>
using namespace std;
void Func1(){
cout<<"My Name is Kevin"<<endl;
cout<<7+4<<endl;
cout<<11*1<<endl;
}
int Func2(float s,float k){
float rem = s/k;
cout<<rem<<endl;
float sub = s - k;
cout<<sub<<endl;
 }
int Func3(int a,int b){
return a*b;
 }
 int main(){
 Func1();
 Func2(6,2);
 int sol = Func3(3,3);
 cout<<" My Solution is :"<<sol<<endl;
 }

