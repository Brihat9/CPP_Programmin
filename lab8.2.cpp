/**Write a program to create a userdefined manipulator that will format the output by setting the width,
precision and fill character at the same time by passing arguments.***/

#include<iostream>
#include<iomanip>
using namespace std;

class manip
{
private:
    int width;
    char fill;
    int precision;
public:
    manip(int w=6,char c='#',int p=5):width(w),fill(c),precision(p) {}
    friend ostream& operator<<(ostream& os,manip &obj);
};
ostream& operator<<(ostream& os,manip &obj)
    {
        return os<<setw(obj.width)<<setfill(obj.fill)<<setprecision(obj.precision);
    }
/*
manip mno(int i,char c,int j)
{
    return manip(i,c,j);
}*/

int main(void)
{
    float a=123,b=45.23,c=-8455;
    cout<<"Without manipulator"<<endl<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<endl;
    manip mn(7,'$',4);
    cout<<"Using manipulator"<<endl;
    cout<<mn<<a<<endl;
    cout<<mn<<b<<endl;
    cout<<mn<<c<<endl;
    return 0;
}
