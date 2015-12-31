#include<iostream>
using namespace std;
class base
{
private:
    int num1;
protected:
    int num2;
public:
    void setdatab(int n1,int n2)
    {
        num1=n1;
        num2=n2;
    }
    void showdatab(void)
    {
        cout<<num1<<" , "<<num2<<endl;
    }
};

class derived:public base
{
private:
    int num3;
public:
    void setdatad(int n1,int n2,int n3)
    {
        setdatab(n1,n2);
        num3=n3;
    }
    void showdatad(void)
    {
        showdatab();
        cout<<num3;
    }
};


int main(void)
{
    derived d;
    d.setdatad(10,20,30);
    d.showdatad();
    d.showdatab();
    return 0;
}
