#include<iostream>
#define N 15
using namespace std;

class vector
{
private:
    int *array;
    int size;
public:
    vector(int s)
    {
        array=new int[s];
        for(int i=0;i<s;i++)
            array[i]=i;
        size=s;
    }
    void setdata()
    {
        for(int i=0;i<size;i++)
        {

        cout<<"Enter element :";
        cin>>array[i];
        }
    }
    vector add(vector s)
    {
        vector c(size);
        for(int i=0;i<size;i++)
        {
            c.array[i]=array[i]+s.array[i];
        }
        return c;
    }
    void show()
    {
        for(int i=0;i<size;i++)
            cout<<array[i]<<endl;
    }
};

int main(void)
{
    cout<<"Enter size of vector : ";
    int d;
    cin>>d;
    vector a(d),b(d);
    a.setdata();
    b.setdata();
    vector c(d);
    c=a.add(b);
    c.show();
}
