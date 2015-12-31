#include<iostream>
using namespace std;

class Pound;

class Kilo
{
private:
    float kg;
public:
    Kilo(float a=0)
    {
        kg=a;
    }
    Kilo(Pound p);
    float fkg()
    {
        return kg;
    }
    void show(void)
    {
        cout<<"Equivalent KG = "<<kg<<endl;
    }
};

class Pound
{
private:
    float pou;
public:
    Pound(float a=0)
    {
        pou=a;
    }
    Pound(Kilo k)
    {
        pou=k.fkg()*2.2;
    }
    float fpound()
    {
        return pou;
    }
    void show(void)
    {
        cout<<"Equivalent pound = "<<pou<<endl;
    }
};

Kilo::Kilo(Pound p)
{
    kg=p.fpound()*(1/2.2);
}

int main(void)
{
    float n;
    cout<<"Enter pound : ";
    cin>>n;
    Pound p(n);
    Kilo k;
    k=p;
  //  p.show();
    k.show();

    cout<<"\n\nEnter kg : ";
    cin>>n;
    Kilo kk(n);
    Pound pp;
    pp=kk;
   // kk.show();
    pp.show();
    return 0;

}
