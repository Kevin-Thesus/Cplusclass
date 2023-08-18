#include<iostream>
using namespace std;

void myFunc(int x,int y){

    cout<<"X value is: "<<x<<endl;
    cout<<"Y value is: "<<y<<endl;
}

void myFunc1(int *arr,int size){

    for(int i = 0; i<size ; i++){
    cout<<arr[i]<<endl;
    }
}
int main(){

    int myArr[] = { 12,3245,7,235,89};
    myFunc(myArr[1],myArr[4]);

    int size = sizeof(myArr)/sizeof(myArr[0]);
    cout<<"value"<<size<<endl;

    myFunc1(myArr,size);

}
