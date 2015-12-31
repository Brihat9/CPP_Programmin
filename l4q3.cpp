#include<iostream>
#include<cstring>
using namespace std;
class department
{
private:
    int depid;
    char *depname;
public:
    department(void)
    {
        cout<<"Default constructor invocation\n"<<endl;
        depid=0;
        depname=new char[strlen("void")];
        depname="void";
    }
    department(int i,char *name)
    {
        cout<<"Construcor called for depid "<<i<<endl<<endl;
        depid=i;
        depname=new char[strlen(name)+1];
        strcpy(depname,name);
    }
    void display(void)
    {
        cout<<"Department ID : "<<depid<<endl;
        cout<<"Department Name : "<<depname<<endl<<endl;
    }
    ~department(void)
    {
        cout<<"Object with ID = "<<depid<<" goes out of scope."<<endl;
    }
};
int main(void)
{
    department d0;
    department d1(1,"human resource"),d2(2,"account"),d3(3,"education");
    d0.display();
    d1.display();
    d2.display();
    d3.display();
    return 0;
}
