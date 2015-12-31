#include<iostream>
using namespace std;

class emprep
{
private:
    int empid,year;
    float bonus,overtime;
public:
    void setpara(int i,int y,float b,float o)
    {
        empid=i;
        year=y;
        bonus=b;
        overtime=o;
    }
    void displayreport()
    {
        cout<<"\nEmployee with ID = "<<empid<<" has received Rs "<<bonus<<" as bonus"<<endl;
        cout<<"and\nhad worked "<<overtime<<" hours as overtime in year "<<year<<".\n\n";
    }
};
int main(void)
{
    int n,i,id,yr;
    float bon,ot;
    cout<<"Enter no of employee : ";
    cin>>n;
    emprep e[n];
    for(i=0;i<n;i++)
    {
        cout<<endl<<"Enter data for emp "<<i+1<<endl;
        cout<<"ID : ";
        cin>>id;
        cout<<"Bonus received (Rs) : ";
        cin>>bon;
        cout<<"Overtime done (hrs) : ";
        cin>>ot;
        cout<<"In the year : ";
        cin>>yr;
        e[i].setpara(id,yr,bon,ot);
    }
    cout<<"\nAll employee's report:"<<endl;
    for(i=0;i<n;i++)
    {
        e[i].displayreport();
    }
    return 0;
}
