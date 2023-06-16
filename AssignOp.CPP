//Assignment Operator
#include<iostream>
using namespace std;
int main()
{
int a = 11;
int b =4;
cout<<" a = "<<a<<endl;
cout<<" b = "<<b<<endl;
 a = (a+=b);
cout<<" a = "<<a<<endl;
 a = (a-=b);
cout<<" a = "<<a<<endl;
 a = (a*=b);
cout<<" a = "<<a<<endl;
 a = (a/=b);
cout<<" a = "<<a<<endl;
 a = (a%=b);
cout<<" a = "<<a<<endl;
return 0;

}
