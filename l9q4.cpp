/**Write  any  program  that  demonstrates  the  use  of  multiple  catch  #handling,  re-throwing  an
exception, and catching all exception.**/

#include<iostream>
using namespace std;
class LIMIT
{
public:
    int limit;
    string des,des1;
public:
    LIMIT(int a=0,string b="",string l="less")
    {
        limit=a;
        des=b;
        des1=l;
    }
};

class date
{
private:
    int day,month,year;
public:
    date()
    {
        day=1;month=1;year=1970;
    }
    void setdata()
    {
        try{
        cout<<"Year should be in between 1970 and 2070\nEnter valid date (DD MM YYYY) : ";
        cin>>day>>month>>year;
        if(day<1)
            throw LIMIT(1,"day");
        if(day>31)
            throw LIMIT(31,"day","greater");
        if(month<1)
            throw LIMIT(1,"month");
        if(month>12)
            throw LIMIT(12,"month","greater");
        if(year<1970)
            throw LIMIT(1970,"year");
        if(year>2070)
            throw LIMIT(2070,"year","greater");
        }
        catch(...)
        {
            cout<<"Exception : out of range"<<endl;
            throw;
        }
    }
    void showdata()
    {
        cout<<"Entered date is : "<<day<<"/"<<month<<"/"<<year<<"."<<endl;
    }
};

int main(void)
{
    date d;
    try
    {
        d.setdata();
        d.showdata();
    }
    catch(LIMIT l)
    {
        cout<<"Exception : "<<l.des<<" cannot be "<<l.des1<<" than "<<l.limit<<endl;
    }
    catch(LIMIT h)
    {
        cout<<"Exception : "<<h.des<<" cannot be "<<h.des1<<" than "<<h.limit<<endl;
    }
    return 0;
}
