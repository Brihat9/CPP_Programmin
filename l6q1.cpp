/**Write a program that can convert the Distance (meter, centimeter) to meters measurement in
float and vice versa. Make a class distance with two data members, meter and centimeter. You
can add function members as per your requirement.**/

#include<iostream>
using namespace std;

class dist
{
private:
    float meter;
    float centimeter;
public:
    dist(float m=0,float c=0)
    {
        meter=m;
        centimeter=c;
    }
    void calc(float m)
    {
        meter=static_cast<int>(m);
        centimeter=(m-meter)*100;
    }
    operator float()
    {
        float mtr;
        mtr=meter+(centimeter/100);
        return mtr;
    }
    void show(void)
    {
        cout<<"Length is "<<meter<<" m "<<"and "<<centimeter<<" cm."<<endl;
    }
};

int main(void)
{
    float a,b;
    cout<<"Enter length in meter : ";
    cin>>a;
    dist d;
    d.calc(a);
    d.show();

    cout<<"\nEnter length in meter and centimeter : ";
    cin>>a>>b;
    dist dd(a,b);
    float meter=dd;
    cout<<"Length is "<<meter<<" m."<<endl;
    return 0;
}
