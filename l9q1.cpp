/**Create  a  function  called  sum (  ) that  returns  the  sum  of  the  elements  of  an  array.  Make  this
function  into  a  template  so  it  will  work  with  any  numerical  type.  Write  a main  (  ) program  that
applies this function to data of various type. **/

#include<iostream>
#define N 5
using namespace std;

template <class T>
T sum(T a[],int n)
{
    T sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

int main(void)
{
    int a[N]={1,2,3,4,5};
    cout<<"Sum of integer array = "<<sum(a,N)<<endl;
    float b[N]={1.2,3.4,5.6,7.8,9.10};
    cout<<"Sum of float array = "<<sum(b,N)<<endl;
    double c[N]={12345,98745,56325,45874,74125};
    cout<<"Sum of double array = "<<sum(c,N)<<endl;
    return 0;
}
