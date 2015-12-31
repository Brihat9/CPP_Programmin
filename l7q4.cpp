/**Create  a  polymorphic  class Vehicle and  create  other  derived
classes Bus, Car and Bike from Vehicle.  With  this  program  illustrate  RTTI  by  the  use
of dynamic_cast and typeid operators.**/

#include<iostream>
#include<typeinfo>
using namespace std;

class vehicle
{
public:
    virtual void display()
    {

    }
};

class bus:public vehicle
{};
class car:public vehicle
{};
class bike:public vehicle
{};

int main(void)
{
    vehicle *pvehicle,v;
    bus *pbus,b;
    car *pcar,c;
    bike *pbike,bi;

    cout<<"*Casting derived object to derived pointer*"<<endl;
    pvehicle=&b;      /**base pointer points to derived object**/
    pbus=dynamic_cast<bus *>(pvehicle);
    if(pbus)
        cout<<"Cast succeeded"<<endl;
    else
        cout<<"Cast failed"<<endl;

    cout<<"*Casting base object to derived pointer*"<<endl;
    pvehicle=&v;        /**base pointer pointa to base object**/
    pcar=dynamic_cast<car*>(pvehicle);
    if(pcar)
        cout<<"Cast succeeded"<<endl;
    else
        cout<<"Cast failed"<<endl;

    // pbike=&v; invalid

    // pcar=&b;  invalid

    cout<<"\n*Finding types with 'typeid'*\n"<<endl;
    cout<<"type of *pvehicle is :  "<<typeid(*pvehicle).name()<<endl;
    cout<<"type of  v is        :  "<<typeid(v).name()<<endl;
   // cout<<"type of *pbus is     :  "<<typeid(*pbus).name()<<endl;
    cout<<"type of  b is        :  "<<typeid(b).name()<<endl;
  //  cout<<"type of *pcar is     :  "<<typeid(*pcar).name()<<endl;
    cout<<"type of  c is        :  "<<typeid(c).name()<<endl;
//    cout<<"type of  pbike is    :  "<<typeid(*pbike).name()<<endl;
    cout<<"type of  bi is       :  "<<typeid(bi).name()<<endl;

    pvehicle=&b;
    cout<<"\ntype of *pvehicle when pointing to bus is : "<<typeid(*pvehicle).name()<<endl;
    pvehicle=&c;
    cout<<"type of *pvehicle when pointing to car is : "<<typeid(*pvehicle).name()<<endl;

    cout<<"\n*Comparing types with typeid*\n"<<endl;
    if(typeid(b)==typeid(c))
        cout<<"type of bus and car is same"<<endl;
    else
        cout<<"type of bus and car is not same"<<endl;

    if(typeid(*pvehicle)!= typeid(vehicle))
        cout<<"type of pointer to vehicle and vehicle is not same"<<endl;
    else
        cout<<"type of pointer to vehicle and vehicle is same"<<endl;

    if(typeid(*pvehicle)!= typeid(c))
        cout<<"type of pointer to vehicle and car is not same"<<endl;
    else
        cout<<"type of pointer to vehicle and car is same"<<endl;

    return 0;
}
