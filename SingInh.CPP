//Example of Single Inheritance//
/*#include<iostream>
using namespace std;
class comPlex{
public:
    int typeGrocery(int a){
        cout<<"Total Grocery Types is "<<a<<endl;
    }
    int workiStaff(int b){
    cout<<"Total Complex Staff is : "<<b<<endl;
    }
    };
    class cusTomers:public comPlex{
public:
    int FirsstYrs(int c){
    cout<<"Total 1st Year Student are : "<<c<<endl;
    }
    int SecndYrs(int d){
cout<<"Total 2ND Year Student are : "<<d<<endl;
}
};
int main(){
cusTomers student ;
student.typeGrocery(10);
student.workiStaff(20);
student.FirsstYrs(100);
student.SecndYrs(70);

}*/
#include<iostream>
using namespace std;
class locStre{
public:
int Tomto(int a){
cout<<"Enter Tomato Offer in Percentage : "<<a<<endl;
}
int Potto(int b){
cout<<"Enter Potato Offer in Percentage : "<<b<<endl;
}
};
class SupMar{
public:
    int Brijal(int c){
    cout<<"Enter Brinjal Offer in Percentage :"<<c<<endl;
    }
    int Radsh(int d){
    cout<<"Enter Raddish Offer in Percentage :"<<d<<endl;
    }
    };
    class PazMudOff:public locStre,public SupMar{

    };
    int main(){
    PazMudOff Offers;
    //locStre
    int Tomto_Offer;
    int Potto_Offer;
    //SupMar
    int Brijal_Offer;
    int Radsh_Offer;
    //LocStre
    cout<<"Enter the Tomato Offer In Percentage :"<<endl;
    cin>>Tomto_Offer;
    cout<<"Enter The Potato Offer In Percentage :"<<endl;
    cin>>Potto_Offer;
    //SupMar
    cout<<"Enter the Brinjal Offer In Percentage :"<<endl;
    cin>>Brijal_Offer;
    cout<<"Enter the Raddish Offer In Percentage :"<<endl;
    cin>>Radsh_Offer;
    Offers.Tomto(Tomto_Offer);
    Offers.Potto(Potto_Offer);
    Offers.Brijal(Brijal_Offer);
    Offers.Radsh(Radsh_Offer);
    }
