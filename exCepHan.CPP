// Exceptional Handling //
#include<iostream>
using namespace std;
int main(){
int num1;
int num2;
int mulTi;
cout<<"Enter Value of Number 1:"<<endl;
cin>>num1;
cout<<"Enter Value Of Number 2:"<<endl;
cin>>num2;
try{
if((num1 =0)||(num2 = 0))
    throw 0;
    mulTi = num1*num2;
    cout<<"The Product Of Two Numbers is :"<<mulTi<<endl;
}
catch(int num_error){
cout<<"Error : Any Number Multiplied with Zero is 0."<<num_error<<endl;
}
return 0;
}
