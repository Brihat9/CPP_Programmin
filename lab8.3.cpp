#include<iostream>
using namespace std;

class cmplx
{
private:
    float real;
    float imag;
public:
    cmplx()
    {
        real=0;
        imag=0;
    }
    friend istream& operator >> (istream& is,cmplx& c);
    friend ostream& operator << (ostream& os,cmplx& c);
};

istream& operator >> (istream& is,cmplx& c)
{
    return is>>c.real>>c.imag;
    //return is;
}

ostream& operator <<(ostream& os,cmplx& c)
{
    return os<<c.real<<c.imag<<"i"<<flush;
    //return os;
}

int main (void)
{
    cout<<"Enter complex number : ";
    cmplx cc;
    cin>>cc;
    cout.setf(ios::showpos);
    cout<<"Entered complex number is : "<<cc<<endl;
    return 0;
}
