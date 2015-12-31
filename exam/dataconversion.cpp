#include<iostream>
using namespace std;

class mdist;
class fdist
{
private:
    float feet,inch;
public:
    fdist(int a=0,int b=0):feet(a),inch(b) {}
    fdist(mdist m);
    float ffeet()
    {
        return feet;
    }
    float finch()
    {
        return inch;
    }
    void show()
    {
        cout<<endl<<feet<<"   "<<inch;
    }
};
class mdist
{
private:
    float meter,centi;
public:
    mdist(int a=0,int b=0):meter(a),centi(b){}
    mdist(fdist f)
    {
        float a=f.ffeet()+f.finch()/12;
        meter=static_cast<int>(a/3.28);
        centi=a/3.28-meter;
    }
    float fmeter()
    {
        return meter;
    }
    float fcenti()
    {
        return centi;
    }
    void show()
    {
        cout<<endl<<meter<<"   "<<centi;
    }
};

fdist::fdist(mdist m)
    {
        float a=m.fmeter()+m.fcenti()/100;
        feet=static_cast<int>(a*3.28);
        inch=a*3.28-feet;
    }
int main(void)
{
    fdist f(32,9.6);
    mdist m(30,48.78);\
    fdist ff;
    mdist mm;
    ff=m;
    ff.show();
    cout<<"sjfs"<<endl;
    mm=f;
    mm.show();
    return 0;
}
