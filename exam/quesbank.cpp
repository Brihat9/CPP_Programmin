#include<iostream>
#include<fstream>

using namespace std;

const char* file="datafile.txt";

class student
{
private:
    char name[25];
    float omark;
public:
  //  student(char n[25]="void",float m=0):name(n),omark(m) {}
    void setdata(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter mark : ";
    cin>>omark;}
    void show(){
    cout<<"name :"<<name<<endl;
    cout<<"obtained mark :"<<omark<<endl;
    cout<<"---------------------------"<<endl;}

    void writetofile()
    {
        ofstream outfile(file,ios::binary|ios::app);
        outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
    }
    void readfromfile()
    {
        ifstream infile(file,ios::binary);
        infile.seekg(0,ios::end);
        int count=infile.tellg()/sizeof(*this);
        student s[count];
        infile.seekg(0);
            for(int i=0;i<count;i++)
                infile.read(reinterpret_cast<char*>(&s[i]),sizeof(s[i]));
        for(int i=0;i<count;i++)
        {
            for(int j=i;j<count;j++)
            {
                if(s[j].omark>s[i].omark)
                {
                    student temp;
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        for(int i=0;i<count;i++)
            s[i].show();
    }
};


int main(void)
{
    cout<<"enter no of student : ";
    int n;
    cin>>n;
    student d;
    for(int i=0;i<n;i++)
        {
            d.setdata();
            d.writetofile();
        }
    d.readfromfile();
    return 0;


}
