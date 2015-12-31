#include<iostream>
using namespace std;

int main(void)
{
    int n,*arr,sum=0;
    float avg;
    cout<<"Enyter numner:";
    cin>>n;
    arr= new int [n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    for (int i=0;i<n;i++)
        sum+=arr[i];
    avg=static_cast<float>(sum)/n;
    cout<<sum<<"        "<<avg<<endl;
    delete []arr;
    return 0;
}
