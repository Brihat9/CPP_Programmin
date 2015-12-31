#include<iostream>
using namespace std;
class date
{
private:
    int dd,mm,yyyy;
public:
    date(int d=0,int m=0,int y=0)
    {
        dd=d;mm=m;yyyy=y;
    }

    friend date operator++(date &);
    friend date operator++(date &,int);

    void condition(void)
    {
        if(yyyy%4!=0 && mm==2 && dd>28)
        {
            dd-=28;
            mm++;
        }
        else if(yyyy%4==0 && mm==2 && dd>29)
        {
            cout<<"Date of LEAP YEAR"<<endl;
            dd-=29;
            mm++;
        }
        else if((mm==4 || mm==6 || mm==9 || mm==11) && dd>30)
        {
            dd-=30;
            mm++;
        }
        else if(dd>31)
        {
            dd-=31;
            mm++;
        }
        if(mm>12)
        {
            mm-=12;
            yyyy++;
        }
    }

    void show(void)
    {
        cout<<"Date (DD MM YYYY) = "<<dd<<" "<<mm<<" "<<yyyy<<endl;
    }
};

date operator ++ (date &a) //pre-increment
{
    a.dd=a.dd+1;
    return a;
}

date operator ++ (date &b,int) //post-increment
{
    date temp=b;
    b.dd=b.dd+1;
    return temp;
}

int main(void)
{
    int day,mon,year;
    cout<<"Enter valid date (DD MM YYYY) : ";
    cin>>day>>mon>>year;
    date d(day,mon,year);
    d.show();

    date d1 = d++; //post increment
    date d2 = ++d; //pre increment

    d1.condition();
    d2.condition();

    cout<<"\nUsing post-increment operator : \n";
    d1.show();

    cout<<"\nUsing pre-increment operator : \n";
    d2.show();

    return 0;
}
