#include<iostream>
using namespace std;
class edistance;
class mdistance
{
private:
    float meter,centimeter;
public:
    void setdata(int a,int b)
    {
        meter=a;
        centimeter=b;
    }
    friend float add(mdistance,edistance);
    void show()
    {
        cout<<"meter : "<<meter<<endl;
        cout<<"centimeter : "<<centimeter<<endl;
    }
};
class edistance
{
private:
    float feet,inch;
public:
    void setdata(int a,int b)
    {
        feet=a;
        inch=b;
    }
    friend float add(mdistance,edistance);
    void show()
    {
        cout<<"feet : "<<feet<<endl;
        cout<<"inch : "<<inch<<endl;
    }
};

float add(mdistance m,edistance e)
{
    float a=m.meter+m.centimeter/100;
    float b=(e.feet*12+e.inch)/3.28;
    return a+b;
}

int main(void)
{
    mdistance m;
    edistance e;
    m.setdata(10,10);
    e.setdata(5,2);
    cout<<"add= "<<add(m,e)<<endl<<"in feet inch" <<add(m,e)*3.28;
    return 0;
}
