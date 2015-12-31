#include<iostream>
using namespace std;
int & maxm(int &,int &);
int main()
{
    int a,b;
    cin>>a>>b;
    maxm(a,b)=100;
    cout<<a<< " "<<b<<endl;
    return 0;

}

int & maxm(int &a,int &b)
{
    return a>b?a:b;
}
