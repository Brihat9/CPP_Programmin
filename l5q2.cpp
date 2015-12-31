#include<iostream>
using namespace std;

class space
{
private:
    int x,y,z;
public:
    space(int a=0,int b=0,int c=0)
    {
        x=a;y=b;z=c;
    }
    friend space operator + (space,space);
    friend space operator - (space,space);
    void show(void)
    {
        cout<<"( "<<x<<" , "<<y<<" , "<<z<<" )"<<endl<<endl;
    }
};

space operator + (space a,space b)
{
    space temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    temp.z=a.z+b.z;
    return temp;
}

space operator - (space a,space b)
{
    space temp;
    temp.x=a.x-b.x;
    temp.y=a.y-b.y;
    temp.z=a.z-b.z;
    return temp;
}

int main(void)
{
    space a1(1,2,3);
    space a2(4,5,6);
    space result;
    cout<<"Point A ";a1.show();
    cout<<"Point B ";a2.show();
    result=a1+a2;
    cout<<"After addition : ";result.show();
    result=a1-a2;
    cout<<"After subtraction : ";result.show();
    return 0;
}
