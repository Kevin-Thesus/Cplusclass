//Mark Calculation
#include<iostream>
using namespace std;
int main(){
int subEng = 92;
int subPhy = 94;
int subChem = 95;
int subMat = 88;
int subBio = 92;
double totalMark = subEng + subPhy + subChem + subMat + subBio;
double averageMark = totalMark/5;
cout<<"Total Mark = "<<totalMark<<endl;
cout<<"Average Mark = "<<averageMark<<endl;
return 0;
}
