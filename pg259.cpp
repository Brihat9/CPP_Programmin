#include<iostream>
#include<cmath>
using namespace std;
class polar;
class cartesian
{
private:
    float xco;
    float yco;
public:
    cartesian()
    {
        xco=0;
        yco=0;
    }
    cartesian(float x,float y)
    {
        xco=x;
        yco=y;
    }
    operator polar()
    {
        float r=static_cast<int>(sqrt(xco*xco+yco*yco));
        float a=static_cast<int>(atan(yco/xco);
        return polar(r,a);
    }
    void display()
    {
        cout<<"("<<xco<<","<<yco<<")";
    }
};

class polar
{
private:
    float radius;
    float angle;
public:
    polar()
    {
        radius=0;
        angle=0;
    }
    polar(float rad,float ang)
    {
        radius=rad;
        angle=ang;
    }
    operator cartesian()
    {
        float x=static_cast<int>(radius*cos(angle));
        float y=static_cast<int>(radius*sin(angle));
        return cartesian(x,y);
    }
    void display()
    {
        cout<<"("<<radius<<","<<angle<<")";
    }
};

int main()
{
    polar pol(10.0,0.7853);
    cartesian cart;
    cart=pol;
    cout<<"Given polar : ";
    pol.display();
    cout<<"\nEquivalent cartesian";
    cart.display();

    cout<<"\n\n";

    cartesian cart1(7.0,7.0);
    polar pol1;
    pol1=cart1;
    cout<<"Given cartesian : ";
    cart1.display();
    cout<<"\nEquivalent polar";
    pol1.display();
    return 0;
}
