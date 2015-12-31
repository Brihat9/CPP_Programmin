#include<iostream>

class english;

class french
{
private:
    float meter;
public:
    french(float m=0)
    {
        meter=m;
    }
    french(english e);
    float fmeter(void)
    {
        return meter;
    }
    void show(void)
    {
        std::cout<<"Equivalent meter = "<<meter<<std::endl;
    }
};

class english
{
private:
    float feet;
public:
    english(float f=0)
    {
        feet=f;
    }
    english(french m)
    {
        feet=m.fmeter()*3.28;
    }
    float ffeet(void)
    {
        return feet;
    }
    void show(void)
    {
        std::cout<<"Equivalent feet = "<<feet<<std::endl;
    }
};

french::french(english e)
{
    meter=e.ffeet()/3.28;
}

int main(void)
{
    float a;
    std::cout<<"Enter meter : ";
    std::cin>>a;
    french f(a);
    english e;
    e=f;
    e.show();

    std::cout<<"\nEnter feet : ";
    std::cin>>a;
    english ee(a);
    french ff;
    ff=ee;
    ff.show();
    return 0;
}
