//Example Of Virtual Base Class//
#include<iostream>
using namespace std;
class add{

public :
    add(){
    cout<< "This is Addition "<<endl;
    }
    };
    class B: public virtual add{

    };
    class C: public virtual add{

    };
    class D: public B,public C{

};
int main(){
    D object ;
    return 0;
}
