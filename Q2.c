#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(void)
{
    int i,k[25],l=0;
    char a[]="idea without execution is worthless";
    for(i=0;i<=strlen(a);i++)
        if(*(a+i)=='c' || *(a+i)=='C')
            k[l++]=i;
    if(l!=0)
    {
        printf("The character 'C' is in");
        for(i=0;i<l;i++)
            printf(" %d",k[i]);
        printf(" position(s).");
    }
    else
        printf("Given string has no 'C' character.");
    getch();
}
