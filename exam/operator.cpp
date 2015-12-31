#include<iostream>

using namespace std;

class md
{
private:
    float m,cm;
public:
    md(float a=0,float b=0):m(a),cm(b) {}

    void show()
    {
        cout<<m<<"  "<<cm<<endl;
    }
};
class ed
{
private:
    float f,i;
public:
    ed(float a,float b):f(a),i(b) {}
    operator md()
    {
        float a=(f+i/12)/3.28;
        float b=static_cast<int>(a);
        float c=(a-b)*100;
        return md(b,c);
    }
    void show()
    {
        cout<<f<<"  "<<i<<endl;
    }
};

int main(void)
{
    ed e(30,28);
    md m;
    m=e;
    m.show();
    return 0;
}
