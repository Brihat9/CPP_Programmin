#include<iostream>
#include<cstdlib>  // for exit
using namespace std;
class array
{
private:
    int arr[10];
public:
    array(int j=0)
    {
        for(int i=0;i<10;i++)
            arr[i]=j;
    }

    int & operator [](int index)
    {
        if(index<0 || index>10)
        {
            cout<<"Index out of bound.";
            exit(1);
        }
        return arr[index];
    }
};

int main(void)
{
    array arra;
    for(int i=0;i<10;i++)
        arra[i]=5*(i+1);
    for(int i=0;i<10;i++)
        cout<<arra[i]<<endl;
    return 0;
}
