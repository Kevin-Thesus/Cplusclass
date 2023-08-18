#include<iostream>
#include<cstring>
using namespace std;
int main(){
char naMe1[] = "KEVIN";
char naMe2[] = " ";
char naMe3[] = "THESUS";
string concatData = strcat(naMe1,naMe2,naMe3);
cout<<" My Full Name is :"<<concatData;
return 0;
}
