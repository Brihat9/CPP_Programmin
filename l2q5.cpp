#include<iostream>
using namespace std;
inline void netpay(float);
int main(void)
{
    float salary;
    cout<<"Enter your salary : ";
    cin>>salary;
    netpay(salary);
}

void netpay(float x)
{
    cout<<"Net payment = "<<(1.0-0.1)*x;
}
