/**Create  a  class Person and  two  derived  classes Employee, and Student, inherited  from
class Person.  Now  create  a  class Managerwhich  is  derived  from  two  base
classes Employee and Student. Show the use of the virtual base class.**/

#include<iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;
public:
    person(string c="void",int a=0):name(c),age(a) {}
    void setdata()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
    void showdata()
    {
        cout<<"Name                 : "<<name<<endl;
        cout<<"Age                  : "<<age<<endl;
    }
};

class student:virtual public person
{
protected:
    int sid;
    string campus;
public:
    student(int a=0,string c="void"):sid(a),campus(c) {}
    void setdata()
    {
        person::setdata();
        cout<<"Enter student ID : ";
        cin>>sid;
        cout<<"Enter name of campus : ";
        cin>>campus;
    }
    void showdata()
    {
        person::showdata();
        cout<<"Student ID           : "<<sid<<endl;
        cout<<"Campus               : "<<campus<<endl;
    }
};

class employee:virtual public person
{
protected:
    int empid;
    string company;
public:
    employee(int a=0,string c="void"):empid(a),company(c) {}
    void setdata()
    {
        //person::setdata();
        cout<<"Enter employee's ID : ";
        cin>>empid;
        cout<<"Enter name of company : ";
        cin>>company;
    }
    void showdata()
    {
       // person::showdata();
        cout<<"Employee's ID        : "<<empid<<endl;
        cout<<"Company              : "<<company<<endl;
    }
};

class manager:public student,public employee
{
private:
    string education;
public:
    manager(string c="void"):education(c) {}
    void setdata()
    {
        student::setdata();
        employee::setdata();
        cout<<"Enter educational qualification : ";
        cin>>education;
    }
    void showdata()
    {
        student::showdata();
        employee::showdata();
        cout<<"Qualification        : "<<education<<endl;
    }
};

int main(void)
{
    manager m;
    m.setdata();
    cout<<endl;
    m.showdata();
    return 0;
}
