#include<iostream>
#include<cstring>
using namespace std;
class sente
{
private:
    char *a;
public:
    sente(char *str=" ")
    {
        a=new char[strlen(str)+1];
        strcpy(a,str);
    }
    void join(sente c1,sente c2)
    {
        int i,j;
        a=new char[strlen(c1.a)+strlen(c2.a)];
        for(i=0;c1.a[i]!='\0';i++)
            a[i]=c1.a[i];
        for(j=0;c2.a[j]!='\0';j++)
            a[i+j]=c2.a[j];
        a[i+j]='\0';
    }
    void show(void)
    {
        cout<<"Your string after concatenation is : "<<endl<<a<<endl;
    }
    ~sente()
    {
        delete []a;
    }
};

int main(void)
{
    sente s3;
    sente s1("Engineers are ");
    sente s2("creatures of logic.");
    s3.join(s1,s2);
    s3.show();
    return 0;
}
