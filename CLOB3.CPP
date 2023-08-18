//Example 3//
#include<iostream>
using namespace std;
class student{
    public:
int roll_no;
string name;
string phoNum;
string adDress;
};
int main(){
student sTu1;
sTu1.roll_no = 21;
sTu1.name = "HARI";
sTu1.phoNum = "9944336018";
sTu1.adDress = "MAHAVEER NAGAR";
student sTu2;
sTu2.roll_no = 27;
sTu2.name = "KEVIN";
sTu2.phoNum = "9944336014";
sTu2.adDress = " KALAIMAGAL NAGAR";
cout<<sTu1.roll_no<<endl;
cout<<sTu1.name<<endl;
cout<<sTu1.phoNum<<endl;
cout<<sTu1.adDress<<endl;
cout<<sTu2.roll_no<<endl;
cout<<sTu2.name<<endl;
cout<<sTu2.phoNum<<endl;
cout<<sTu2.adDress<<endl;
}
