/**Write  a  program  to  demonstrate  the  use  of  different  ios  flags  and  functions  to  format  the  output.
Create a program to generate the bill invoice of a department store by using different formatting.**/

#include<iostream>
#include<iomanip>
using namespace std;

class date
{
protected:
    int year,month,day;
public:
    date() { year=2015; month=2; day=15;}
    void setdata()
    {
        cout<<"Enter date (MM DD YYYY) : ";
        cin>>month>>day>>year;
    }
};
class billhead
{
protected:
    int billnum;
    string name;
public:
    billhead(){ billnum=1; name="void";}
    void setdata()
    {
        cout<<"Enter bill no : ";
        cin>>billnum;
        cout<<"Enter buyer's name : ";
        cin>>name;
    }
};

class bill:public date,public billhead
{
protected:
    string part;
    int quantity;
    float rate,total;

public:
    float gtotal;
    bill(string c="void",int q=1,float r=0)
    {
        part=c;
        quantity=q;
        rate=r;
        total=quantity * rate;
    }
    float ftotal(void)
    {
        return total;
    }
    void show1()
    {
        cout<<"---------------------------------------------------"<<endl;
      //  cout<<"              XYZ DEPARTMENTAL STORE              "<<endl;
        cout<<setw(35)<<"XYZ COMPUTER SHOWROOM"<<endl;
      //  cout<<"               NEW ROAD, KATHMANDU                "<<endl;
        cout<<setw(34)<<"NEW ROAD, KATHMANDU"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout<<"Bill No: "<<billnum<<setw(27)<<"Date : "<<month<<"/"<<day<<"/"<<year<<endl;
        cout<<"Costumer's name : "<<name<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout<<setw(3)<<"Sno."<<setw(12)<<"Particular"<<setw(12)<<"Quantity"<<setw(11)<<"Rate"<<setw(10)<<"Total"<<endl;
        cout<<"---------------------------------------------------"<<endl;
    }
    void show2()
    {
        cout<<"---------------------------------------------------"<<endl;
       // cout<<"         Total :                         "<<gtotal<<endl;
        cout<<setw(16)<<"Total :"<<setw(33)<<gtotal<<endl;
        cout<<"---------------------------------------------------"<<endl;
    }
    void showpart()
    {
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(2);
        cout<<setw(15)<<part<<setw(8)<<quantity<<setw(15)<<rate<<setw(10)<<total<<endl;
    }
};

int main(void)
{
    bill bil;
    bill pa[6];
    bil.billhead::setdata();
    bil.date::setdata();

    pa[0]={"Pen Drive",5,850};
    pa[1]={"CDROM",2,2100.45};
    pa[2]={"Hard Disk",4,4500};
    pa[3]={"LCD Monitor",2,13500};
    pa[4]={"Laser Printer",2,8500};
    pa[5]={"Scanner",1,5000};

    bil.show1();
    for(int i=0;i<6;i++)
    {
        cout<<i+1;
        pa[i].showpart();
    }
    for(int i=0;i<6;i++)
    {
        bil.gtotal+=pa[i].ftotal();
    }
    bil.show2();
    return 0;
}
