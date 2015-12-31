/**Write three derived classes inheriting functionality of base class person (should have a
member function that asks to enter name and age) and with added unique features of student,
and employee, and functionality to assign, change and delete records of student and employee.
And make one member function for printing address of the objects of classes (base and derived)
using this pointer. Create two objects of base class and derived classes each and print the
addresses of individual objects. Using calculator, calculate the address space occupied by each
object and verify this with address spaces printed by the program.**/

#include<iostream>
using namespace std;

class person
{
protected:
    char name[25];
    int age;
public:
    void setdata(void)
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
    void showdata(void)
    {
        cout<<"\nName                 : "<<name<<endl;
        cout<<"Age                  : "<<age<<endl;
    }
};

class student:public person
{
private:
    int sid;
public:
    void setdata(void)
    {
        person::setdata();
        cout<<"Enter student ID : ";
        cin>>sid;
    }
    void showdata(void)
    {
        person::showdata();
        cout<<"Student ID           : "<<sid<<endl;
    }
    void printAddress(void)
    {
        cout<<"I am from within the object s and my address is "<<this<<endl;
    }
};
class employee:public person
{
private:
    char org_name[25];
public:
    void setdata(void)
    {
        person::setdata();
        cout<<"Enter company's name : ";
        cin>>org_name;
    }
    void showdata(void)
    {
        person::showdata();
        cout<<"Company              : "<<org_name<<endl;
    }
    void printAddress(void)
    {
        cout<<"I am from within the object e and my address is "<<this<<endl;
    }
};

int main(void)
{
    student s;
    s.setdata();
    s.showdata();
    s.printAddress();
    cout<<endl;
    employee e;
    e.setdata();
    e.employee::showdata();
    e.printAddress();
    return 0;
}
