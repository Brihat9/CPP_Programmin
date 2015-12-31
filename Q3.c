#include<stdio.h>
#include<conio.h>

typedef struct student
{
    char name[25];
    int mark;
}s;

void main(void)
{
    int i,n;
    printf("This program stores and retrive name and mark of students\n");
    printf("Enter no of student: ");
    scanf("%d",&n);
    s stud[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter name of student %d: ",i+1);
        scanf("%s",stud[i].name);
        printf("Enter mark in C programming: ");
        scanf("%d",&stud[i].mark);
    }
    system("cls");
    printf("\tStored data:\n");
    printf("\n    Name of student\t\tMark in c\n");
    printf("--------------------------------------------\n");
    for(i=0;i<n;i++)
        printf("%d) %s\t\t\t%d\n",i+1,stud[i].name,stud[i].mark);
    getch();
}
