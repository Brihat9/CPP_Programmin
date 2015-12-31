#include<iostream>
#include<cmath>
#define pi 3.1415

using namespace std;

class circle
{
private:
    int radius;
    float peri,area;
public:
    void data()
    {
        cout<<"Enter radius : ";
        cin>>radius;
    }
    void calc()
    {
        peri=2*pi*radius;
        area=pi*pow(radius,2);
    }
    void show()
    {
        cout<<"Shape: Circle"<<endl;
        cout<<"Radius : "<<radius<<endl<<"Perimeter : "<<peri<<endl<<"Area : "<<area<<endl;
    }
};

class rectangle
{
private:
    int length,breadth;
    float peri,area;
public:
    void data()
    {
        cout<<"Enter length and breadth : ";
        cin>>length>>breadth;
    }
    void calc()
    {
        peri=2*(length+breadth);
        area=length*breadth;
    }
    void show()
    {
        cout<<"Shape: Rectangle"<<endl;
        cout<<"Length : "<<length<<"\tBreadth : "<<breadth<<endl<<"Perimeter : "<<peri<<endl<<"Area : "<<area<<endl;
    }
};

class triangle
{
private:
    int a,b,c;
    float s,peri,area;
public:
    void data()
    {
        cout<<"Enter sides of triangle : ";
        cin>>a>>b>>c;
    }
    void calc()
    {
        peri=a+b+c;
        s=peri/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    }
    void show()
    {
        cout<<"Shape: Triangle"<<endl;
        cout<<"Sides : "<<a<<"\t"<<b<<"\t"<<c<<endl<<"Perimeter : "<<peri<<endl<<"Area : "<<area<<endl;
    }
};

int main(void)
{
    int i,n;
    circle c;
    rectangle r;
    triangle t;
    cout<<"Type 1 for circle, 2 for rectangle, 3 for triangle:";
    cin>>n;
    switch(n)
    {
    case(1):
        c.data();
        c.calc();
        c.show();
        break;

    case(2):
        r.data();
        r.calc();
        r.show();
        break;

    case(3):
        t.data();
        t.calc();
        t.show();
        break;
    }
    return 0;
}
