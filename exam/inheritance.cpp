#include<iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;
public:
    void setdata()
    {
        cout<<"Enter person's detail";
        cout<<"\nName :  ";cin>>name;
        cout<<"Age : ";cin>>age;
    }
    void show()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
    }
};

class student:public person
{
private:
    int sid;
    string college;
public:
    void setdata()
    {
        person::setdata();
        cout<<"Enter roll no : ";cin>>sid;
        cout<<"Enter college : ";cin>>college;
    }
    void show()
    {
        person::show();
        cout<<"roll no  :"<<sid<<endl;
        cout<<"college  :"<<college<<endl;
    }
};

class teacher:public person
{
private:
    int exp;
    string qualifi;
public:
    void setdata()
    {
        person::setdata();
        cout<<"Enter year : ";cin>>exp;
        cout<<"Enter qualification : ";cin>>qualifi;
    }
    void show()
    {
        person::show();
        cout<<"year  :"<<exp<<endl;
        cout<<"qualification  :"<<qualifi<<endl;
    }
};class nteacher:public person
{
private:
    string address;
public:
    void setdata()
    {
        person::setdata();
        cout<<"Enter address : ";cin>>address;
    }
    void show()
    {
        person::show();
        cout<<"college  :"<<address<<endl;
    }
};

int main(void)
{
    student s;
    s.setdata();
    s.show();
    teacher as;
    as.setdata();
    as.show();
    nteacher ns;
    ns.setdata();
    ns.show();
    return 0;

}
