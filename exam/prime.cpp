#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
    int i,j;
    for(i=4;i<1000000;i++)
    {
        for(j=2;j<i;j++)
            if(i%j==0)
                break;
        if(j==i)
        {
            cout<<i<<endl;
            system("pause");
        }
    }
    return 0;
}
