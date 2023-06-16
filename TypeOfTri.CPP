//Write a Program to determine the type of triangle based on the given side length
#include<iostream>
using namespace std;
int main(){
int a;
int b;
int c;
cout<<" Enter length of side a : ";
cin>> a;
cout<<" Enter length of side b : ";
cin>> b;
cout<< " Enter length of side c : ";
cin>> c;
if((a==b)&&(b==c)){
    cout<<" It is a Equilateral Triangle "<<endl;
}else if((a==b)||(b==c)){
    cout<<" It is a Isosceles Triangle "<<endl;
}else{
    cout<<" It is a Scalene Triangle "<<endl;
}
return 0;
}
