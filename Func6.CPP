// 6//
#include<iostream>
using namespace std;
int voteElig(int a){
if(a>=18){
    cout<<"The person is Eligible to Vote"<<endl;
}
else{
    cout<<"The person is not Eligible to Vote"<<endl;
}
}
int main(){
int a;
cout<<"Enter the value of a"<<endl;
cin>>a;
voteElig(a);
return 0;
}
