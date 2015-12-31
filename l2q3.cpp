#include<iostream>
using namespace std;
namespace square
{
    int num;
    int fun(int n)
    {
        return n*n;
    }
}
namespace cube
{
    int num;
    int fun(int n)
    {
        return n*n*n;
    }
}
int main(void)
{
    square::num=1;
    cube::num=2;
    cout<<"Squared of "<<cube::num<<" is "<<square::fun(cube::num);
    cout<<"\nCube of "<<square::num<<" is "<<cube::fun(square::num);
    return 0;
}
