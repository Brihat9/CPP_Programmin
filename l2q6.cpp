#include<iostream>
#include<iomanip>
using namespace std;
float newsal(float,float =.12);
int main (void)
{
    float ceo=35000,info=25000,sys=24000,prog=18000;
    ceo=newsal(ceo,.09);
    info=newsal(info,.1);
    sys=newsal(sys,.12);
    prog=newsal(prog,.12);
    cout<<"New Salary:"<<endl;
    cout<<setw(26)<<"CEO : "<<setw(8)<<ceo<<endl;
    cout<<setw(26)<<"Information officer : "<<setw(8)<<info<<endl;
    cout<<setw(26)<<"System Analyst : "<<setw(8)<<sys<<endl;
    cout<<setw(26)<<"Programmer : "<<setw(8)<<prog<<endl;
    return 0;
}
float newsal(float s, float i)
{
    return s+s*i;
}
