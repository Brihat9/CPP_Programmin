/**Modify the stack class given in the previous lab to add the exception when user tries to add item
while the stack is full and when user tries to add item while the stack is empty. Throw exception in
both of the cases and handle these exceptions.**/


#include<iostream>
#define MAX 2
using namespace std;

class stack
{
private:
    int array[MAX];
    int count;
public:
    class FULL{};
    class EMPTY{};

    stack()
    {
        count=0;
        for(int i=0;i<MAX;i++)
            array[i]=0;
    }

    void add(int a)
    {
        if(count<MAX)
        {
            array[count++]=a;
            cout<<a<<" added in stack."<<endl;
        }
        else
            throw FULL();
    }

    int remove()
    {
        if(count!=0)
            return array[--count];
        else
            throw EMPTY();
    }

    int size()
    {
        return count;
    }
};

int main(void)
{
    int a;
    char c;
    cout<<"Integer stack\n"<<endl;
    stack s;
    try
    {
        do
        {
            cout<<"Size of stack : "<<s.size()<<endl;
            cout<<"Enter data to add in stack ("<<MAX-s.size()<<" remaining) : ";
            cin>>a;
            s.add(a);
            cout<<"Another (y/n) > ";
            cin>>c;
        }while(c=='y' || c=='Y');
    }
    catch(stack::FULL)
    {
        cout<<"Cannot add\nException : Stack FULL\n";
    }
    cout<<endl;
    try
    {
        cout<<"Size of stack : "<<s.size()<<endl;
        cout<<"Removing "<<s.remove()<<endl;
        cout<<"Size of stack : "<<s.size()<<endl;
        cout<<"Removing "<<s.remove()<<endl;
        cout<<"Size of stack : "<<s.size()<<endl;
        cout<<"Removing "<<s.remove()<<endl;
    }

    catch(stack::EMPTY)
    {
        cout<<"Exception : Stack EMPTY\n";
    }
    return 0;
}
