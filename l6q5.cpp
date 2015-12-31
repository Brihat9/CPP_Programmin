/** Write base class that ask the user to enter a complex number and make a derived class that
adds the complex number of its own with the base. Finally make third class that is friend of
derived and calculate the difference of base complex number and its own complex number.**/


#include<iostream>
#include<cmath>
using namespace std;

class third;
class base
{
private:
    float x,y;
public:
    void setdata(void)
    {
        cout<<"Enter coeff of complex number x+iy : ";
        cin>>x>>y;
    }
    float fx(void)
    {
        return x;
    }
    float fy(void)
    {
        return y;
    }
    void show(void)
    {
        cout<<"\nGiven complex no = "<<"( "<<x<<" , "<<y<<" )"<<endl;
    }
};

class derived:public base
{
private:
    float x,y;
public:
    void setdata(void)
    {
        cout<<"Enter 2nd complex number : ";
        cin>>x>>y;
    }
    void add(base b)
    {
        x=x+b.fx();
        y=y+b.fy();
    }
    void show(void)
    {
        cout<<"Sum = "<<"( "<<x<<" , "<<y<<" )"<<endl;
    }
    friend class third;
};

class third:public derived
{
private:
    float x,y;
public:
    void setdata(void)
    {
        cout<<"Enter 3rd complex number :";
        cin>>x>>y;
    }
    void diff(base b)
    {
        x=b.fx()-x;
        y=b.fy()-y;
    }
    void show(void)
    {
        cout<<"Difference = "<<"( "<<x<<" , "<<y<<" )"<<endl;
    }

};

int main(void)
{
    base b;
    derived d;
    third t;
    b.setdata();
    d.setdata();
    t.setdata();
    d.add(b);
    t.diff(b);
    b.show();
    d.show();
    t.show();
    return 0;
}
