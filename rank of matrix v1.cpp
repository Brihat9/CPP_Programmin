#include<iostream>
#include<iomanip>
#include<cstdlib>
#define N 10

using namespace std;
class matrix_rank
{
private:
    int row,column;
    float matrix[N][N];
public:
    matrix_rank(int x=N,int y=N)
    {
        row=x;
        column=y;
        for(int i=0;i<row;i++)
            for(int j=0;j<column;j++)
                matrix[i][j]=0;
    }
    void setmatrix()
    {
        cout<<"\nEnter elements of matrix row wise : ";
        for(int i=0;i<row;i++)
            for(int j=0;j<column;j++)
                cin>>matrix[i][j];
        cout<<endl<<" Row = "<<row<<"     Column = "<<column<<endl;
    }
    void showmatrix()
    {
        cout<<endl<<"\nEquivalent matrix is\n"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
                cout<<setw(10)<<matrix[i][j]<<setw(4);
            cout<<endl;
        }
    }
    void echelon()
    {
        int i=0,j=0,n=0;
        float k=0,l=0;
        for(i=0;i<row;i++)
        {
            if(matrix[i][i]==0 && (i<row-1))
            {
                correct(i);
                echelon();
            }
            else if(matrix[i][i]!=0)
            {
                l=matrix[i][i];
                for(j=0;j<column;j++)
                    matrix[i][j]*=(1/l);
                showmatrix();
                for(n=i;n<row;n++)
                {
                    k=matrix[n+1][i];
                    for(j=0;j<column;j++)
                        matrix[n+1][j]-=(k*matrix[i][j]);
                    showmatrix();
                }
            }
        }
    }
    int rankmatrix()
    {
        int i=0,j=0,rankm=0;
        for(i=0;i<row;i++)
            for(j=0;j<column;j++)
                if(i==j)
                    if(matrix[i][j]!=0)
                        rankm++;
        return rankm;
    }
    void correct(int x)
    {
        int srow,scolumn;
        float temp[N][N];
        for(srow=0;srow<row;srow++)
        {
            for(scolumn=0;scolumn<column;scolumn++)
            {
                temp[srow][scolumn]=matrix[x][scolumn];
                matrix[x][scolumn]=matrix[x+1][scolumn];
                matrix[x+1][scolumn]=temp[srow][scolumn];
            }
        }
    }
};

int main(void)
{
    int a,b;
    char c;
    do{
        system("cls");
        cout<<"\n   * * *       B   R   I   H   A   T      * * *";
        cout<<"\n   * * *   CALCULATES  RANK  OF  MATRIX   * * *\n"<<endl;
        cout<<"Enter order of matrix\n Row    ( MAX = 10 ) : ";
        cin>>a;
        cout<<" Column ( MAX = 10 ) : ";
        cin>>b;
        matrix_rank m(a,b);
        m.setmatrix();
        m.showmatrix();
        m.echelon();
        m.showmatrix();
        cout<<"\n\nRank of given matrix is : "<<m.rankmatrix()<<endl;
        cout<<"\nAnother (y/n) ??? ";
        cin>>c;
    }while(c=='y' || c=='Y');
    return 0;
}
