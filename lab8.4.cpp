/** Write  a  program  that  stores  the  information  about  students  (name,  student  id,department  and
address) in a structure and then transfers the information to a file in your directory. Finally, retrieve the
information from your  file and print in the proper format on your output screen**/

#include<iostream>
#include<fstream>

using namespace std;
const char* datafile="record.txt";

class student
{
private:
    string name;
    int stuid;
    string department;
    string address;
public:
    student(string a="Default",int b=1,string c="Default",string d="Default"):name(a),stuid(b),department(c),address(d) {}
    void setdata()
    {
        cout<<"Enter data to record"<<endl;
        cout<<"Name         : ";cin>>name;
        cout<<"ID           : ";cin>>stuid;
        cout<<"Department   : ";cin>>department;
        cout<<"Address      : ";cin>>address;
        cout<<endl;
    }
    void showdata(void)
    {
        cout<<"Name         : "<<name<<endl;
        cout<<"ID           : "<<stuid<<endl;
        cout<<"Department   : "<<department<<endl;
        cout<<"Address      : "<<address<<endl;
    }
    void writedata()
    {
        ofstream file(datafile,ios::out);
        setdata();
        file.write(reinterpret_cast<char*>(this),sizeof(*this));
    }
    void readdata()
    {
        cout<<"Data from file "<<endl;
        ifstream file(datafile,ios::in);
        while(not file.eof())
        {
            if(file.read(reinterpret_cast<char*>(this),sizeof(*this))>0)
                showdata();
        }
    }
};

int main(void)
{
    student s;
    s.writedata();
    s.readdata();

/*    cout<<"Again"<<endl<<endl;
    student ss;
    ss.setdata();
    ofstream wfile(datafile,ios::binary);
    wfile.write(reinterpret_cast<char*>(&ss),sizeof(ss));

    student sss;
    cout<<"Data from file "<<endl;
    ifstream rfile(datafile,ios::binary);
    while(not rfile.eof())
    {
        rfile.read(reinterpret_cast<char*>(&sss),sizeof(sss));
        sss.showdata();
    }
*/
    return 0;
}
