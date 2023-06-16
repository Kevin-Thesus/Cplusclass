//Leap Year
#include<iostream>
using namespace std;
int main(){
int year;
cout<<" Enter The Year : "<<endl;
cin>> year;
if( year%400 == 0)
    {
    cout<<" It is a Leap Year "<<endl;
    } else if( year%100 == 0){
    cout<<" It is not a Leap Year "<<endl;
    } else if( year%4 == 0){
    cout<<" It is a Leap Year "<<endl;
    } else{
    cout<<" It is not a Leap Year "<<endl;
    }
    return 0;
}
