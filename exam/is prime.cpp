#include<iostream>
#include<iomanip>
using namespace std;

enum {Fale,Tre};

class number
{
private:
    int num;
public:
    number(int n=0):num(n) {}
    void setdata()
    {
        cout<<"enter number ";
        cin>>num;
    }
    int isprime()
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
                return Fale;
        }
        return Tre;
    }
    int show()
    {
        return num;
    }
};

int main (void)
{
    number n;
    n.setdata();
    n.isprime()? cout<<"Prime" :cout<<"not prime";
    return 0;
}
