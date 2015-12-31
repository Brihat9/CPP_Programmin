#include<iostream>
using namespace std;
class lab
{
private:
    const int constnum;  //constant member
    int nonconstnum;    //non constant member
public:
    lab(int num1 = 0, int num2 = 1):constnum(num1),nonconstnum(num2) {}  //constructor

    int nonconstfun()    //non const function
    {
        return nonconstnum;
    }

    int constfun() const //constant function
    {
        return constnum;
    }
};

int main()
{
    const lab l1(1,2); //constant object
    lab l2(3,4); //non constant object
    //But constant object cannot call non constant function member...     (i)
    cout<<"Constant object cannot call non constant function member "<<endl;
    //constant object can call constant function member...                (ii)
    cout<<"constant object calling constant function member: "<<l1.constfun()<<endl;
    //non constant object can call non constant function member...        (iii)
    cout<<"non constant object calling non constant function member: "<<l2.nonconstfun()<<endl;
    //non constant object can call constant function member...            (iv)
    cout<<"non constant object calling constant function member: "<<l2.constfun()<<endl;
    return 0;
}
