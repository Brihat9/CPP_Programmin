#include<iostream>
using namespace std;
class opr
{
private:
    int data;
public:
    opr(int n=0)
    {
        data=n;
    }
    int operator == (opr b)
    {
        if(data==b.data)
            return 1;
        return 0;
    }
    int operator < (opr b)
    {
        if(data<b.data)
            return 1;
        return 0;
    }
    int operator > (opr b)
    {
        if(data>b.data)
            return 1;
        return 0;
    }
    int operator != (opr b)
    {
        if(data!=b.data)
            return 1;
        return 0;
    }
    int operator >= (opr b)
    {
        if(data>=b.data)
            return 1;
        return 0;
    }
    int operator <= (opr b)
    {
        if(data<=b.data)
            return 1;
        return 0;
    }
    void show(void)
    {
        cout<<data<<endl;
    }
};

int main(void)
{
    int x;
    cout<<"Enter 1st number : ";
    cin>>x;
    opr a1(x);
    cout<<"Enter 2nd number : ";
    cin>>x;
    opr a2(x);
    cout<<"\na = ";a1.show();cout<<"b = ";a2.show();cout<<endl;

    cout<<"Test for a (operator) b"<<endl<<endl;
    cout<<"Test for '==' operator";
    a1 == a2 ? cout<<"  TRUE"<<endl : cout<<"  FALSE"<<endl;

    cout<<"Test for  '<' operator";
    a1 < a2 ? cout<<"  TRUE"<<endl : cout<<"  FALSE"<<endl;

    cout<<"Test for  '>' operator";
    a1 > a2 ? cout<<"  TRUE"<<endl : cout<<"  FALSE"<<endl;

    cout<<"Test for '!=' operator";
    a1 != a2 ? cout<<"  TRUE"<<endl : cout<<"  FALSE"<<endl;

    cout<<"Test for '>=' operator";
    a1 >= a2 ? cout<<"  TRUE"<<endl : cout<<"  FALSE"<<endl;

    cout<<"Test for '<=' operator";
    a1 <= a2 ? cout<<"  TRUE"<<endl : cout<<"  FALSE"<<endl;

    return 0;
}
