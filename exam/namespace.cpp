#include<iostream>
using namespace std;

namespace distance
{
    float num;
    float convert(float &a)
    {
        a*=100.0;
    }
}
int main(void)
{
    cout<<"Enter distance in meter";
    cin>>distance::num;
    distance::convert(distance::num);
    cout<<"in centimeter : "<<distance::num<<endl;
    return 0;
}
