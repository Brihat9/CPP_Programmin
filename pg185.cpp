#include<iostream>
#include<cstring>
using namespace std;
class tdc
{
private:
    char *str1,*str2;
public:
    tdc()
    {
        str1=new char[1];
        str1[0]='\0';
        str2=str1;
    }
    tdc(char *string1,char *string2)
    {
        str1=new char[strlen(string1)+1];
        strcpy(str1,string1);
        str2=new char[strlen(string2)+1];
        strcpy(str2,string2);
    }
    void display()
    {
        cout<<"You entered : "<<str1<<"  "<<str2;
    }
    ~tdc()
    {
        delete []str1;
        delete []str2;
    }
};
int main(void)
{
    tdc dc("Nepal","brihat");
    dc.display();
    return 0;
}
