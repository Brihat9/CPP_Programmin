#include<iostream>
using namespace std;

class a;
class b
{
private:
    int num;
public:
    b():num(0) {}
    void set(int x)
    {
        num=x;
    }
    friend int add(a ,b);
};

class a
{
private:
    int num;
public:
    a():num(0) {}
    void set(int x){
        num=x;
        }
    friend int add(a,b);
};

int add(a x,b y)
{
    return x.num+y.num;
}

int main(void)
{
    a aa;aa.set(2);
    b bb;bb.set(4);
    int c;
    c=add(aa,bb);
    cout<<c;
    return 0;
}
