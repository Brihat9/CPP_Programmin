#include<iostream>
using namespace std;
class state
{
private:
    static int count;
    int id;
public:
    state()
    {
        count++;
        id=count;
    }
    static int getcount()
    {
        return count;
    }
    void show(void)
    {
        cout<<"Serial no : "<<id<<endl;
        cout<<"Total count is :"<<count<<endl;
    }
};
int state::count=0;
int main(void)
{
    state s1,s2;
    cout<<"Value of count after creating 2 objects : "<<state::getcount()<<endl;
    cout<<"\nFor object 1"<<endl;
    s1.show();
    cout<<"Value of count is "<<state::getcount()<<endl;
    cout<<"\nFor object 2"<<endl;
    s2.show();
    cout<<"\nCreating 3rd object...\n"<<endl;
    state s3;
    cout<<"Value of count after 3rd object : "<<state::getcount()<<endl;
    cout<<"\nFor object 3"<<endl;
    s3.show();
    cout<<"Final value of count : "<<state::getcount()<<endl;
    cout<<"\nAgain for object 1"<<endl;
    s1.show();
    return 0;
}
