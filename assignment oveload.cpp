#include<iostream>
using namespace std;

class opr
{
private:
    int id;
    char* name;
    int phone;
public:
    opr(int i=0,char *n="",int p=0)
    {
        id=i;
        name=n;
        phone=p;
    }
    opr operator = (opr b)
    {
        cout<<"operator overloading "<<endl;
        id=b.id;
        name=b.name;
        phone=b.phone;
    }
    void show(void)
    {
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Phone : "<<phone<<endl;
    }
};

int main(void)
{
    opr x(5,"brihat",849929662);
    opr y;
    y=x;
    y.show();
    return 0;
}
