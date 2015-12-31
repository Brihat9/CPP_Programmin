/** Write a program for transaction processing that write and read object randomly to and from a random
access  file  so  that  user  can  add,  update,  delete  and  display  the  account  information  (accountnumber,
lastname, firstname, totalbalance). **/

#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;
const char* datafile="rec.txt";
class account
{
private:
    int accno;
    char fname[25];
    char lname[25];
    float balance;
public:
    void setdata()
    {
        cout<<"Enter record"<<endl;
        cout<<"Account no       : ";cin>>accno;
        cout<<"First name       : ";cin>>fname;
        cout<<"Last name        : ";cin>>lname;
        cout<<"Balance          : ";cin>>balance;
        cout<<endl;
    }
    void showdata()
    {
        cout<<"----------------------------------------"<<endl;
        cout<<"Account number    : "<<accno<<endl;
        cout<<"Name              : "<<fname<<" "<<lname<<endl;
        cout<<"Available balance : "<<balance<<endl;
        cout<<"----------------------------------------"<<endl;
    }
    void writerec()
    {
        ofstream outfile(datafile,ios::binary|ios::app);
        setdata();
        outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
    }
    void readallrec()
    {
        ifstream infile(datafile,ios::binary);
        if(!infile)
        {
            cout<<"File not found"<<endl;
            return;
        }
        cout<<"Data from file"<<endl;
        while(!infile.eof())
        {
            if(infile.read(reinterpret_cast<char*>(this),sizeof(*this))>0)
                showdata();
        }
    }
    void readonerec()
    {
        int n;
        ifstream infile(datafile,ios::binary);
        if(!infile)
        {
            cout<<"File not found"<<endl;
            return;
        }
        infile.seekg(0,ios::end);
        int count=infile.tellg()/sizeof(*this);
        cout<<"There are "<<count<<" records in the file\nEnter record number : ";
        cin>>n;
        infile.seekg((n-1)*sizeof(*this));
        infile.read(reinterpret_cast<char*>(this),sizeof(*this));
        showdata();
    }
    void updaterec()
    {
        int n;
        fstream iofile(datafile,ios::binary|ios::in);
        if(!iofile)
        {
            cout<<"File not found"<<endl;
            return;
        }
        iofile.seekg(0,ios::end);
        int count=iofile.tellg()/sizeof(*this);
        cout<<"There are "<<count<<" records in the file\nEnter record number to edit : ";
        cin>>n;
        iofile.seekg((n-1)*sizeof(*this));
        iofile.read(reinterpret_cast<char*>(this),sizeof(*this));
        cout<<"Existing data "<<endl;
        showdata();
        iofile.close();
        iofile.open(datafile,ios::out|ios::in|ios::binary);
        iofile.seekg((n-1)*sizeof(*this));
        cout<<"Enter new data"<<endl;
        setdata();
        iofile.write(reinterpret_cast<char*>(this),sizeof(*this));
    }
    void deleterec()
    {
        int n;
        char tempfile[]="temp.txt";
        ifstream infile(datafile,ios::binary);
        if(!infile)
        {
            cout<<"file not found"<<endl;
            return;
        }
        infile.seekg(0,ios::end);
        int count=infile.tellg()/sizeof(*this);
        cout<<"\nNo of record ; "<<count;
        cout<<"\nEnter record to delete : ";
        cin>>n;
        fstream tmpfile(tempfile,ios::out|ios::binary);
        infile.seekg(0);
        for(int i=0;i<count;i++)
        {
            infile.read(reinterpret_cast<char*>(this),sizeof(*this));
            if(i==(n-1))    continue;
            tmpfile.write(reinterpret_cast<char*>(this),sizeof(*this));
        }
        infile.close();
        ofstream outfile(datafile,ios::binary);
        tmpfile.close();
        tmpfile.open(tempfile,ios::in|ios::binary);
        for(int i=0;i<count-1;++i)
        {
            tmpfile.read(reinterpret_cast<char*>(this),sizeof(*this));
            outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
        }
        tmpfile.close();
        remove(tempfile);
    }
};

int main(void)
{
    account a;
    int choice;
    while(true)
    {
        cout<<"Select one option\n"<<endl;
        cout<<"1    Write to file"<<endl;
        cout<<"2    Show all records"<<endl;
        cout<<"3    Show one record"<<endl;
        cout<<"4    Edit a record"<<endl;
        cout<<"5    Delete a record"<<endl;
        cout<<"6    Exit"<<endl;
        cout<<"-> ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            a.writerec();
            break;
        case 2:
            a.readallrec();
            break;
        case 3:
            a.readonerec();
            break;
        case 4:
            a.updaterec();
            break;
        case 5:
            a.deleterec();
            break;
        case 6:
            exit(0);
            break;
        default:
            main();
        }
    }
    return 0;
}
