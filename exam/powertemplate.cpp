#include<iostream>
#include<cmath>
using namespace std;

template<typename T>
T powerr(T b,int p)
{
    if(p<0)
        p=-p;
    return pow(b,p);
}

int main(void)
{
    cout<<"Enter base and power : ";
    int base,power;
    cin>>base>>power;
    cout<<"result : "<<powerr(base,power);
    return 0;
}
