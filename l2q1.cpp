#include<iostream>
using namespace std;
struct date
{
    int mm,dd,yyyy;
};
void display(struct date);
int main(void)
{
    struct date today;
    today={12,10,2014};
    display(today);
    return 0;
}
void display(struct date d)
{
    cout<<"Today's date is "<<d.mm<<"/"<<d.dd<<"/"<<d.yyyy<<"."<<endl;
}
