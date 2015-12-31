#include<iostream>
#define N 5
using namespace std;

class matrix
{
private:
    int a,b;
    float mat[N][N];
public:
    matrix(int x=N,int y=N)
    {
        a=x;b=y;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                mat[i][j]=0;
    }
    void setdata()
    {
       //// int a,b;
        //cout<<"Enter order of matrix to add ";
      //  cin>>a>>b;
        cout<<"Enter elements "<<endl;
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
            {
                cout<<"enter element "<<i+1<<"."<<j+1<<" : ";
                cin>>mat[i][j];
            }
    }
    void show()
    {
        for(int i=0;i<a;i++)
           {
            for(int j=0;j<b;j++)
                cout<<mat[i][j]<<"\t";
            cout<<endl;
           }
    }
  //  friend matrix operator + (matrix m,matrix n);
  matrix operator + (matrix m)
  {
        matrix res(a,b);
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
                res.mat[i][j]=mat[i][j]+m.mat[i][j];
        return res;
    }

};
//matrix operator + (matrix m,matrix n)
//{
//        matrix res(m.a,m.b);
//        for(int i=0;i<m.a;i++)
//            for(int j=0;j<m.b;j++)
//                res.mat[i][j]=m.mat[i][j]+n.mat[i][j];
//        return res;
//    }
int main(void)
{
    int a,b;
    cout<<"Enter order of matrix to add ";
        cin>>a>>b;
    matrix A(a,b),B(a,b),C(a,b);
    A.setdata();
    B.setdata();
    C=A+B;
    C.show();
    return 0;
}
