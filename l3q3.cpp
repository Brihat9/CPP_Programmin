#include<iostream>
#include<iomanip>
using namespace std;
class carpark
{
private:
    int cid,rate,hr,charge;
    float time;
public:
    void data(int i,int r, float t)
    {
        cid=i;
        rate=r;
        time=t;
    }
    void calc()
    {
        charge=rate*time;
    }
    void show()
    {
        cout<<setw(15)<<"Car id : "<<cid<<endl;
        cout<<setw(15)<<"Rate : "<<rate<<endl;
        cout<<setw(15)<<"Parked hour : "<<time<<endl;
        cout<<setw(15)<<"Charge : "<<charge<<endl;
    }
};
int main(void)
{
    carpark c;
    c.data(123,200,5);
    c.calc();
    c.show();
    return 0;
}
