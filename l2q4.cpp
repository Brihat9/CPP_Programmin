#include<iostream>
using namespace std;

int &tempc(int &, int &);
int main(void)
{
    int x,y;
    cout<<"Enter two temperature: ";
    cin>>x>>y;
    tempc(x,y)=100;
    cout<<"Temperature after changing greater to 100."<<endl;
    cout<<x<<" "<<y;
}

int &tempc(int &a,int &b)
{
    if(a>b)
        return a;
    else
        return b;
}
