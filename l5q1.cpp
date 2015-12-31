#include<iostream>
using namespace std;

class addition;
class subtraction;
class multiplication;
class division;

class cartesian
{
private:
    float x,y;
public:
    cartesian(float a=0,float b=0)
    {
        x=a;y=b;
    }
    friend cartesian add(cartesian,addition);
    friend cartesian diff(cartesian,subtraction);
    friend cartesian product(cartesian,multiplication);
    friend cartesian divide(cartesian,division);
    void show(void)
    {
        cout<<"( "<<x<<" , "<<y<<" )"<<endl<<endl;
    }
};

class addition
{
private:
    float x,y;
public:
    addition(float a=0,float b=0)
    {
        x=a;y=b;
    }
    friend cartesian add(cartesian,addition);
};

class subtraction
{
private:
    float x,y;
public:
    subtraction(float a=0,float b=0)
    {
        x=a;y=b;
    }
    friend cartesian diff(cartesian,subtraction);
};

class multiplication
{
private:
    float x,y;
public:
    multiplication(float a=0,float b=0)
    {
        x=a;y=b;
    }
    friend cartesian product(cartesian,multiplication);
};

class division
{
private:
    float x,y;
public:
    division(float a=0,float b=0)
    {
        x=a;y=b;
    }
    friend cartesian divide(cartesian,division);
};

cartesian add(cartesian c1,addition c2)
{
    cartesian temp;
    temp.x=c1.x+c2.x;
    temp.y=c1.y+c2.y;
    return temp;
}

cartesian diff(cartesian c1,subtraction c2)
{
    cartesian temp;
    temp.x=c1.x-c2.x;
    temp.y=c1.y-c2.y;
    return temp;
}

cartesian product(cartesian c1,multiplication c2)
{
    cartesian temp;
    temp.x=c1.x*c2.x;
    temp.y=c1.y*c2.y;
    return temp;
}

cartesian divide(cartesian c1,division c2)
{
    cartesian temp;
    if(c2.x==0 || c2.y==0)
        cout<<"Cannot divide by zero"<<endl;
    temp.x=c1.x/c2.x;
    temp.y=c1.y/c2.y;
    return temp;
}

int main (void)
{
    cartesian result;

    cartesian c(1,2);
    addition a(3,4);
    subtraction s(5,6);
    multiplication m(7,8);
    division d(9,0);

    result=add(c,a);
    cout<<"After addiion :  ";
    result.show();

    result=diff(c,s);
    cout<<"After subtraction :  ";
    result.show();

    result=product(c,m);
    cout<<"After multiplication :  ";
    result.show();

    result=divide(c,d);
    cout<<"After division :  ";
    result.show();

    return 0;
}
