#include<iostream>
using namespace std;
void show(int x,int y);
int main(void)
{
    int a,b;
    cin>>a>>b;
    show(a,b);
    return 0;
}

inline void show(int x,int y)
{
    cout<<x<<y;
}
