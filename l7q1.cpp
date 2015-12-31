/**Write a program to create a class shape with functions to find area of the shapes and display the
name  of  the  shape  and  other  essential  component  of  the  class. Create  derived  classes  circle,
rectangle  and  trapezoid  each  having  overridden  functions  area  and  display.  Write  a  suitable
program to illustrate virtual functions and virtual destructor.**/

#include<iostream>
#define PI  3.1415
using namespace std;
class shape
{
protected:
    float length,breadth;
public:
    shape(float l=0,float b=0)
    {
        length = l;
        breadth = b;
    }
    virtual float area() {}
    virtual ~shape()
    {
        cout<<"Destructor of shape called"<<endl;
    }
};

class circle:public shape
{
private:
    float radius;
public:
    circle(float r=0):radius(r) {}
    float area()
    {
        return PI*radius*radius;
    }
    ~circle()
    {
        cout<<"Destructor of circle called"<<endl;
    }
};

class rectangle:public shape
{
public:
    rectangle(float l=0,float b=0):shape(l,b) { }
    float area()
    {
        return length*breadth;
    }
    ~rectangle()
    {
        cout<<"Destructor of rectangle called"<<endl;
    }
};

class trapezoid:public shape
{
private:
    float height;
public:
    trapezoid(float l=0,float b=0,float h=0):shape(l,b),height(h) {}
    float area()
    {
        return (length + breadth)*height;
    }
    ~trapezoid()
    {
        cout<<"Destructor of trapezoid called"<<endl;
    }
};

int main(void)
{
    shape *s;
    circle cir(2.5);
    rectangle rec(5.5,2.5);
    trapezoid trap(2.5,8.5,4.2);
    s=&cir;
    cout<<"Area of circle is : "<<s->area()<<endl;
    s=&rec;
    cout<<"Area of rectangle is : "<<s->area()<<endl;
    s=&trap;
    cout<<"Area of trapezoid is : "<<s->area()<<endl;
    return 0;
}
