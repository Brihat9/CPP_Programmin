#include<iostream>
using namespace std;

template<typename T>
float sum(T a,int n)
{
    float f=0;
    for(int i=0;i<n;i++)
    {
        f+=a[i];
    }
    return f;
}

template<typename T>
float avg(T a,int n)
{
    return sum(a,n)/n;
}

int main(void)
{
    cout<<"Enter number of data : ";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter data :"<<i+1;
        cin>>a[i];
    }
    cout<<"Sum : "<<sum(a,n);
    cout<<"average : "<<avg(a,n);
    return 0;
}
