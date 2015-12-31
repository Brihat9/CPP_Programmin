/**Write  a  program  with Student as  abstract  class  and  create  derive
classes Engineering, Medicine and Science from base classStudent. Create the objects of the
derived  classes  and  process  them  and  access  them  using  array  of  pointer  of  type  base
class Student.**/

#include<iostream>
using namespace std;

class student
{
protected:
    string name;
public:
    student(string n="void"):name(n) {}
    virtual void setdata()
    {
        cout<<"Enter name : ";
        cin>>name;
    }
    virtual void display() = 0;
};

class engineering:public student
{
private:
    string campus,address;
public:
    engineering(string c="void",string d="void"):campus(c),address(d) {}
    void setdata()
    {
        cout<<endl<<"Engineering"<<endl;
        student::setdata();
        cout<<"Enter name of campus : ";
        cin>>campus;
        cout<<"Enter address : ";
        cin>>address;
    }
    void display()
    {
        cout<<"Engineering"<<endl;
        cout<<"Name         : "<<name<<endl;
        cout<<"Campus       : "<<campus<<endl;
        cout<<"Address      : "<<address<<endl;
    }
};

class medicine:public student
{
private:
    string course;
    float duration;
public:
    medicine(string c="void",float d=0):course(c),duration(d) {}
    void setdata()
    {
        cout<<endl<<"Medicine"<<endl;
        student::setdata();
        cout<<"Enter name of course : ";
        cin>>course;
        cout<<"Enter duration in years : ";
        cin>>duration;
    }
    void display()
    {
        cout<<"Medicine"<<endl;
        cout<<"Name         : "<<name<<endl;
        cout<<"Course       : "<<course<<endl;
        cout<<"Duration     : "<<duration<<endl;
    }
};

class science:public student
{
private:
    string level;
    int year;
public:
    science(string c="void",int d=0):level(c),year(d) {}
    void setdata()
    {
        cout<<endl<<"Science"<<endl;
        student::setdata();
        cout<<"Enter level : ";
        cin>>level;
        cout<<"Enter year : ";
        cin>>year;
    }
    void display()
    {
        cout<<"Science"<<endl;
        cout<<"Name         : "<<name<<endl;
        cout<<"Level        : "<<level<<endl;
        cout<<"Year         : "<<year<<endl;
    }
};

int main(void)
{
    student *stu[3];
    engineering e;
    medicine m;
    science s;
    stu[0]=&e;
    stu[1]=&m;
    stu[2]=&s;
    for(int i=0;i<3;i++)
        stu[i]->setdata();
    for(int i=0;i<3;i++)
    {
        cout<<endl;
        stu[i]->display();
    }
    return 0;
}
