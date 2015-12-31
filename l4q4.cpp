#include<iostream>
using namespace std;
class vehicle
{
private:
    int num_vehicle,hour,rate;
    float charge;
public:
    vehicle(int i=0,int j=0,int k=0) //constructor with default argument
    {
        num_vehicle=i;
        hour=j;
        rate=k;
        charge=0;
    }
    vehicle(vehicle &v)     //COPY CONSTRUCTOR
    {
        num_vehicle=v.num_vehicle;
        hour=v.hour;
        rate=v.rate;
        charge=v.charge;
    }
    void calc(void)
    {
        int i;
        charge=num_vehicle*rate*hour;
        if(num_vehicle>10)
            charge*=0.9;
    }
    void display(void)
    {
        cout<<"\nTotal charge = "<<charge;
    }
};
int main (void)
{
    int n,hr,r;
    cout<<"Enter details:"<<endl;
    cout<<"Number of vehicle :";
    cin>>n;
    cout<<"Enter time (in hour):";
    cin>>hr;
    cout<<"Enter rate (per hour):";
    cin>>r;
    vehicle v1(n,hr,r);
    vehicle v2(v1);
    v2.calc();
    v2.display();
    return 0;
}
