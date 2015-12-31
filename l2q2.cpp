#include<iostream>
using namespace std;
void fti(void);
int fti(int);
void fti(int,int &);

int main(void)
{
    int f,i;
    fti();
    cout<<"Enter feet : ";
    cin>>f;
    i=fti(f);
    cout<<f<<" feet is equal to "<<i<<" inches.\n"<<endl;
    cout<<"Enter feet : ";
    cin>>f;
    fti(f,i);
    cout<<f<<" feet is equal to "<<i<<" inches.\n"<<endl;
}
void fti(void)
{
    int x;
    cout<<"Enter feet : ";
    cin>>x;
    cout<<x<<" feet is equal to "<<x*12<<" inches.\n"<<endl;
}

int fti(int a)
{
    return a*12;
}

void fti(int a,int &b)
{
    b=a*12;
}
