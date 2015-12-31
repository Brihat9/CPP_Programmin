#include<stdio.h>
#include<string.h>
#include<conio.h>
int main (void)
{
    int a,c[10],d=0;
    char s[50];
    printf("Enter any string:");
    gets(s);
    for(a=0;a<=strlen(s);a++)
        if(s[a]=='c' || s[a]=='C')
            c[d++]=a+1;
    if(d!=0)
    {
        printf("\n\nThe character 'C' is in");
        for(a=0;a<d;a++)
            printf(" %d ",c[a]);
        printf("position(s).");
    }
    else
        printf("Given string has no 'C' character.");
    getch();
    return 0;
}
