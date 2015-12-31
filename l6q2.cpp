/**Write two classes to store distances in meter-centimeter and feet-inch system respectively.
Write conversions functions so that the program can convert objects of both types.**/

#include<iostream>
using namespace std;
class english;

class french
{
private:
    float meter;
    float centimeter;
public:
    french(float m=0,float c=0)
    {
        meter=m;
        centimeter=c;
    }
    french(english e);
    float fmeter(void)
    {
        return meter+centimeter/100;
    }
    void show(void)
    {
        cout<<"Equivalent length = "<<meter<<" m and "<<centimeter<<" cm."<<endl;
    }
};

class english
{
private:
    float feet;
    float inch;
public:
    english(float f=0,float i=0)
    {
        feet=f;
        inch=i;
    }
    english(french m)
    {
        float temp=m.fmeter()*3.28;
        feet=static_cast<int>(temp);
        inch=(temp-feet)*12;
    }
    float ffeet(void)
    {
        return feet+inch/12;
    }
    void show(void)
    {
        cout<<"Equivalent length = "<<feet<<" feet and "<<inch<<" inches."<<endl;
    }
};

french::french(english e)
{
    float temp=e.ffeet()/3.28;
    meter=static_cast<int>(temp);
    centimeter=(temp-meter)*100;
}

int main(void)
{
    float a,b;
    cout<<"Enter length in french system (m and cm) : ";
    cin>>a>>b;
    french f(a,b);
    english e;
    e=f;
    e.show();

    cout<<"\nEnter length in english system (feet and inches) : ";
    cin>>a>>b;
    english ee(a,b);
    french ff;
    ff=ee;
    ff.show();
    return 0;
}
