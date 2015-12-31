#include<iostream>
using namespace std;
class time
{
private:
    int hour,min,sec;
    char cc;
public:
    time(int hr=0,int mi=0,int sc=0,char ch='\0')
    {
        hour=hr;
        min=mi;
        sec=sc;
        cc=ch;
    }
    time addtime(time t)
    {
        if((cc=='p'||cc=='P')&& hour!=12)
            hour+=12;
        if((t.cc=='p'||t.cc=='P')&& t.hour!=12)
            t.hour+=12;
        if((cc=='a'||cc=='A')&& hour==12)
            hour=0;
        if((t.cc=='a'||t.cc=='A')&& t.hour==12)
            t.hour=0;
        time res;
        res.hour=hour+t.hour;
        res.min=min+t.min;
        res.sec=sec+t.sec;
        if(res.sec>59)
        {
            res.sec-=60;
            res.min++;
        }
        if(res.min>59)
        {
            res.min-=60;
            res.hour++;
        }
        res.cc='\0';
        return res;
    }
    void display()
    {
        if((cc=='p'||cc=='P') && hour!=12)
            hour+=12;
        if((cc=='a'||cc=='A')&& hour==12)
            hour=0;
        cout<<"The time in 24 hr format is "<<hour<<" : "<<min<<" : "<<sec<<" .\n";
    }
};

int main(void)
{
    int hr,mm,ss;
    char c;
    cout<<"enter time 1 (hh mm ss) and type 'a' for AM and 'p' for PM: ";
    cin>>hr>>mm>>ss>>c;
    time t1(hr,mm,ss,c);
    cout<<"enter time 2 (hh mm ss) and type 'a' for AM and 'p' for PM: ";
    cin>>hr>>mm>>ss>>c;
    time t2(hr,mm,ss,c);
    time t3;
    t3=t1.addtime(t2);
    t1.display();
    t2.display();
    cout<<"\nAfter addition :\n";
    t3.display();
    return 0;
}
