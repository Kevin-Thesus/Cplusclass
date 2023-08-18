#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n "<<endl;
cin>>n;
/*for(i=1;i<=n;i++){
    if(i==1){
        cout<<n1<<" ";
        if(i==2){
            cout<<n2<<" ";

        }
    }n3=n1+n2;
    n1=n2;
    n2=n3;
    cout<<n3<<"|";
}return 0;*/


for(int i = 1; i<=n; i++){

    for(int j = 1; j<=i; j++){

        cout<<" * ";
    }
    cout<<endl;
}

}
