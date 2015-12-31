#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
    char name[25];
    double age;
    ofstream outfile("contact,doc");
    cout<<"Enter name ;";
    cin>>name;
 //   outfile<<name<<endl;
    cout<<"Enter age : ";
    cin>>age;
    outfile<<name<<endl<<age<<endl;

    ifstream infile("contact,doc");
    infile>>name;
    infile>>age;
    cout<<"Data from file : \n name = "<<name<<"\nage = "<<age<<endl;


    return 0;


}
