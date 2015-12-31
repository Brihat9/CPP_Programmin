#include<iostream>
using namespace std;

int main(void)
{
    int a,b,c,d;
    cout<<"Enter 4 numbers : ";
    cin>>a>>b>>c>>d;
    int e;
  //  e=(a<b)?((a<c)?((a<d)?a:d)):((b<c)?b:c);
    e=a<b?a<c?a<d?a:d:c<d?c:d:b<c?b<d?b:d:c<d?c:d;
    cout<<"smallest = "<<e<<endl;
    return 0;
}
