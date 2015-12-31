#include<iostream>
#include<cmath>
#define  PI  3.1415
using namespace std;

class polarr;

class cartesian
{
private:
    float x,y;
public:
    cartesian(float a=0,float b=0)
    {
        x=a;
        y=b;
    }
    cartesian(polarr p);
    float xcor(void)
    {
        return x;
    }
    float ycor(void)
    {
        return y;
    }
    void show(void)
    {
        cout<<"( "<<x<<" , "<<y<<" )"<<endl;
    }
};


class polarr
{
private:
    float radius,angle;
public:
    polarr(float r=0,float a=0)
    {
        radius=r;
        angle=a;
    }
    polarr(cartesian c)
    {
        radius=sqrt(c.xcor()*c.xcor()+c.ycor()*c.ycor());
        angle=atan(c.ycor()/c.xcor())*(180/PI);
    }
    float fradius(void)
    {
        return radius;
    }
    float fangle(void)
    {
        return angle;
    }
    void show(void)
    {
        cout<<"Radius (r) = "<<radius<<endl;
        cout<<"Angle  ( ) = "<<angle<<endl;
    }
};

cartesian::cartesian(polarr p)
{
    x=p.fradius()*cos(p.fangle()*(PI/180));
    y=p.fradius()*sin(p.fangle()*(PI/180));
}

int main(void)
{
    float a,b;
    cout<<"Enter x- and y- coordinate of cartesian point : ";
    cin>>a>>b;
    cartesian cc(a,b);
    cc.show();
    polarr pp;
    pp=cc;
    cout<<"In polar coordinate : "<<endl;
    pp.show();

    cout<<"\nEnter radius and angle point : ";
    cin>>a>>b;
    polarr p(a,b);
    p.show();
    cartesian c;
    c=p;
    cout<<"In cartesian coordinate : ";
    c.show();
    return 0;
}
