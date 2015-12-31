#include<iostream>
using namespace std;

class fahr
{
private:
    float fahren,celcius;
public:
    void setdata(void)
    {
        cout<<"Enter fahrenheit:";
        cin>>fahren;
    }
    void tocel(void)
    {
        celcius=((fahren-32)*5)/9;
    }
    void show(void)
    {
        cout<<"In celcius: "<<celcius<<endl;
    }
};

class centi
{
private:
    float celcius,fahren;
public:
    void setdata(void)
    {
        cout<<"Enter celcius: ";
        cin>>celcius;
    }
    void tofahr(void)
    {
        fahren=9*celcius/5+32;
    }
    void show(void)
    {
        cout<<"In fahrenheit: "<<fahren<<endl;
    }
};

int main (void)
{
    centi c;
    fahr f;
    c.setdata();
    c.tofahr();
    c.show();
    f.setdata();
    f.tocel();
    f.show();
    return 0;
}
