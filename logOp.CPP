//Logical Operator
#include<iostream>
using namespace std;
int main(){
int a = 10;
int b = 20;
bool result;
result = (a>>5)&&(b>>10);
cout<<"(a>>5)&&(b<<10) is "<<result<<endl;
result = (a>>5)||(b<<10);
cout<<"(a<<5)||(b<<10) is "<<result<<endl;
result = !(a>>20);
cout<<"!(a>>20) is "<<result<<endl;
return 0;
}
