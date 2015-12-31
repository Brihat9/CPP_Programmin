#include<iostream>
using namespace std;
 class science
 {
 protected:
    string name;
 public:
        science(string a):name(a) {}
    virtual void descrip()= 0;
 };

 class engineering:public science
     {
     private:
     float cost;
        public:
            engineering(string b,float f):science(b),cost(f) {}
                void descrip()
            {
                cout<<"engineering is the branch of science"<<endl;
                cout<<name<<endl;
                cout<<cost<<endl;
            }
     };

int main(void)
{
    science *sc;
    engineering en("brihat",315000);
    sc=&en;
    sc->descrip();
    return 0;
}
