#include<iostream>
using namespace std;

class prime
{
private:
    int pr;
public:
    void data()
    {
        cout<<"Enter any no.: ";
        cin>>pr;
    }
    int check()
    {
        int i;
        for(i=2;i<pr;i++)
            if(pr%i==0)
                return 1;
        return 0;
    }
    void show()
    {
        check() ? cout<<"Not prime"<<endl : cout<<"Prime"<<endl;
    }
};
int main(void)
{
    prime p;
    char c;
    do{
        p.data();
        p.check();
        p.show();
        cout<<"Continue(y/n): ";
        cin>>c;
    }while(c=='y' || c=='Y');
    return 0;
}
