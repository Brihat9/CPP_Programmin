#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main(void)
{
    char* s="abcdefghi";
    for(int i=1;i<=strlen(s);i+=2)
    {
        cout<<setw(i+4)<<left;
        cout.write(s,i)<<endl;
    }
    return 0;
}
