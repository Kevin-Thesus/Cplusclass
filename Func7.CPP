//Question 7//
#include<iostream>
using namespace std;
int funcPri(int a,int n){
if((a%a==0)&&(a%n!=0)){
   cout<<"It is a Prime Number "<<endl;
   }
else{
    cout<<"It is not a Prime Number"<<endl;
}
}
int main(){
int a,n;
cout<<"Enter the Number :"<<endl;
cin>>a;
cout<<"Enter the Number :"<<endl;
cin>>n;
funcPri(a,n);
return 0;
}
