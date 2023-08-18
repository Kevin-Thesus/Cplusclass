//Example Of Function Overriding//
#include<iostream>
using namespace std;
class ss{
public:
    int Func1(){
    cout<<" SS is a Function"<<endl;
    }
    };
    class sk:public ss{
public:
    int Func2(){
    cout<<"SK is a Function"<<endl;
    }
    };
    int main(){
    sk obj;
    obj.Func2
    ();
    return 0;
    }
