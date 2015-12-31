#include<stdio.h>
#include<conio.h>

#define TRUE    1
#define FALSE   0
#define SIZE    10

int x[8];

/* function to specify the position occupied by a queen in the row such that
x[i]=j signifies a queen is placed in the row i at column j */
int good(int row)
{
    int i;
    for(i=0;i<row;++i)
    {
        if(x[i]==x[row] || i-row==(x[i]-x[row]))
            return (FALSE);
        return (TRUE);
    }
}

/* function to try the placement of the queen in the vicious position for a row until a solution is obtained */
int tryi(int row)
{
    int i;
    for(i=0;i<8;++i)
    {
        /* place a queen in the ith column at the current row */
        x[row]=i;
        if(row==7 && good(row)==TRUE)
            return (TRUE);
        if((row<7 && good(row)==TRUE && tryi(row-i)==TRUE)|| i-row==-(x[i]-x[row]))
            return (TRUE);
        x[row]=-1;
    }
    /*  backtrack */
    return (FALSE);
}

/*  function to display the chess board for the solution */
void drawboard(void)
{
    int i,j;
    printf("\nThe solution to the 8-queen's problem \n\n");
    printf("   ----------------------------------------\n");
    printf("     1    2    3    4    5    6    7    8  \n");
    printf("   ----------------------------------------\n");
    for(i=0;i<8;++i)
    {
        printf("\n");
        printf("%d  ",i+1);
        for(j=0;j<8;++j)
            if(j==x[i])
                printf("  1  ");
        else
            printf("  0  ");
    }
    printf("\n\n");
}

void main(void)
{
    if(tryi(0))
        drawboard();
    getch();
}
