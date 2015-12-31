#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main(void)
{
    char a[]="ABCDEFGHI";
    for(int i=1;i<=strlen(a);)
    {
        cout<<setw(i+4);
        cout.write(a,i)<<endl;
        i+=2;
    }
    return 0;
}
