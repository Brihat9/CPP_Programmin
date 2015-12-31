#include<iostream>
using namespace std;

class celsius;

class fahrenheit
{
private:
    float fahren;
public:
    fahrenheit(float f=0)
    {
        fahren=f;
    }
    fahrenheit(celsius c);
    float ffahren(void)
    {
        return fahren;
    }
    void show(void)
    {
        cout<<"Equivalent fanrenheit = "<<fahren<<endl;
    }
};

class celsius
{
private:
    float centi;
public:
    celsius(float c=0)
    {
        centi=c;
    }
    celsius(fahrenheit f)
    {
        centi=(5.0/9)*(f.ffahren()-32);
    }
    float fcenti(void)
    {
        return centi;
    }
    void show(void)
    {
        cout<<"Equivalent celsius = "<<centi<<endl;
    }
};

fahrenheit::fahrenheit(celsius c)
{
    fahren=(9.0/5)*c.fcenti()+32;
}

int main(void)
{
    float a;
    cout<<"Enter fahrenheit : ";
    cin>>a;
    fahrenheit f(a);
    celsius c;
    c=f;
    c.show();

    cout<<"\nEnter celsius : ";
    cin>>a;
    celsius cc(a);
    fahrenheit ff;
    ff=cc;
    ff.show();
    return 0;
}
