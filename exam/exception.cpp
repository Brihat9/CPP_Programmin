#include<cmath>
#include<iostream>
using namespace std;

class math
{
private:
    float number;
public:
    class NEG
    {
    public:
        string des;
    public:
        NEG(string s):des(s) {}
    };
    void set()
    {
        cout<<"enter number to find sq root : ";
        cin>>number;
    }
    float root()
    {
        if (number <0)
            throw NEG("sqrt of neg no not defined");
        return sqrt(number);
    }
};

int main(void)
{
    math m;
    m.set();
    try{
    cout<<"result : "<<m.root();
    }
    catch(math::NEG n)
    {
        cout<<n.des<<endl;
    }
    return 0;
}
