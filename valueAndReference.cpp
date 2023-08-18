#include<iostream>
using namespace std;


//pass by value
int add(int a,int b,int c){
    c = a+b;
    cout<<"total value is: "<<c<<endl;
}

// pass by reference
int square(int &value){

int result = value*value;
cout<<"square value is: "<<result<<endl;
}

int main(){

int a= 12, b = 13,c;
add(a,b,c);

int value = 5;
square(value);
}
