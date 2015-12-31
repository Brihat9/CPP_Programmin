#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(void)
{
    string str1("digital");
    string str2="divide";
    string str3;
    str3=str1;
    cout<<str3<<endl;

    cout<<"enter string : ";
    cin>>str3;
    cout<<str3<<endl;

    str3="bridging "+str1+" "+str2;
    cout<<str3<<endl;

    string str4(" is essential");
    str3+=str4;
    cout<<str3<<endl;

    system("pause");
    str1.insert(2,str2);
    cout<<str1<<endl;
    int a=str1.find("divide");
    cout<<a<<endl;
    str1.replace(3,8,str3);
    cout<<str1<<endl;
    str1.erase(4,6);
    cout<<str1<<endl;
    cout<<str1.length()<<" "<<str1.size();
    system("pause");
    return 0;
}
