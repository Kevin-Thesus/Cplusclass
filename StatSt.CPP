#include<iostream>
using namespace std;
int stFunc();
int nstFunc();
int main(){
   cout<< stFunc() <<endl;
   cout<< stFunc() <<endl;
   cout<< stFunc() <<endl;
   cout<< nstFunc() <<endl;
   cout<< nstFunc() <<endl;
   cout<< nstFunc() <<endl;

}
int stFunc(){
   cout<<" st variable :"<<endl;
   static int num = 0;
   num++;
   return num;
}
int nstFunc(){
  cout<<" nst varaible :"<<endl;
  int num = 0;
  num++;
  return num;
}
