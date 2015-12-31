/**Create a class called Musicians to contain three methods string ( ), wind ( ) and perc ( ). Each of
these methods should initialize a string array to contain the following instruments
-  veena, guitar, sitar, sarod and mandolin under string ( )
-  flute, clarinet saxophone, nadhaswaram and piccolo under wind()
-  tabla, mridangam, bangos, drums and tambour under perc ( )
It should also display the contents of the arrays that are initialized. Create a derived class
called TypeIns to contain a method called get ( ) and show ( ). The get ( ) method must display a  menu
as follows
Type of instruments to be displayed
a.   String instruments
b.   Wind instruments
c.   Percussion instruments
The show ( ) method should display the relevant detail according to our choice. The base class variables
must be accessible only to its derived classes.**/

#include<iostream>
using namespace std;

class musicians
{
private:
    string m[5];
public:
    void str(void)
    {
        m[0]=" Veena";
        m[1]=" Guitar";
        m[2]=" Sitar";
        m[3]=" Sarod";
        m[4]=" Mandolin";
    }
    void wind(void)
    {
        m[0]=" Flute";
        m[1]=" Clarinet";
        m[2]=" Saxophone";
        m[3]=" Nadhaswaram";
        m[4]=" Piccolo";
    }
    void perc(void)
    {
        m[0]=" Tabla";
        m[1]=" Mridangam";
        m[2]=" Bangos";
        m[3]=" Drums";
        m[4]=" Tambour";
    }
    void display(void)
    {
        for(int i=0;i<5;i++)
            cout<<i+1<<m[i]<<endl;
    }
};

class typeins:public musicians
{
private:
    char c;
public:
    typeins(char a='\0')
    {
        c=a;
    }
    void get(void)
    {
        cout<<"Type of instruments to be displayed"<<endl;
        cout<<"a.   String instruments"<<endl;
        cout<<"b.   Wind instruments"<<endl;
        cout<<"c.   Percussion instruments"<<endl;
    }
    void show()
    {
        switch(c)
        {
        case 'a':
            str();
            cout<<"\nString Instruments:"<<endl;
            display();
            break;
        case 'b':
            wind();
            cout<<"\nWind Instruments:"<<endl;
            display();
            break;
        case 'c':
            perc();
            cout<<"\nPercussion Instruments:"<<endl;
            display();
            break;
        default:
            get();
        }
    }
};

int main(void)
{
    char c;
    typeins music;
    music.get();
    cout<<"Enter your choice (a/b/c) : ";
    cin>>c;
    music=c;
    music.show();
    return 0;
}
