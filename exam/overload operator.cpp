#include<iostream>
#include<iomanip>
using namespace std;

class time
{
private:
    int hour,min,sec;
    char c;
public:
    time(int a=0,int b=0,int c=0,char d='a'):hour(a),min(b),sec(c),c(d) {}
    friend ostream & operator <<(ostream &os ,time &t);

};
ostream & operator <<(ostream &os ,time &t)
    {
        if(t.hour>12)
        {
            t.hour-=12;
            t.c='p';
        }
        os<<t.hour<<":"<<t.min<<":"<<t.sec<<" "<<t.c<<flush;
        return os;
    }
int main(void)
{
    time tt(10,12,11);
    cout<<tt;
    return 0;

}
