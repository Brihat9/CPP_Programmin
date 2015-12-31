#include<stdio.h>
#include<conio.h>
struct date
{
    int mm,dd,yyyy;
};
void display(struct date);
void main(void)
{
    struct date d = {11,28,2004};
    display(d);
    getch();
}
void display(struct date x)
{
    printf("%d/%d/%d",x.mm,x.dd,x.yyyy);
}
