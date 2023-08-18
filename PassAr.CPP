//Method-1
#include<iostream>
using namespace std;
void meTH(int a,int b){
int sum =  a+b;
cout<<"Sum is :"<<sum<<endl;
}
//Method-2
void poIN(int*arr,int s3){
int sum = 0;
for(int i = 0;i<s3;i++){
    sum+=i;
    cout<<arr[i]<<endl;
    cout<<"Sum "<<sum<<endl;
}
}
int main(){
int nuMB[]={10,34,55,67,89};
meTH(nuMB[2],nuMB[4]);
int s1 = sizeof(nuMB);
int s2 = sizeof(nuMB[0]);
int s3 = sizeof(nuMB)/sizeof(nuMB[0]);
poIN(nuMB,s3);
}
