#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct student
{
    char name[25];
    int roll;
    char addr[25];
    int phone;
}stud;
int main (void)
{
    int i,j,n;
    printf("Enter no of student: ");
    scanf("%d",&n);
    stud a[n],c[n],temp;
    FILE *fp=fopen("stdif","w+b");
    for(i=0;i<n;i++)
    {
        printf("\nEnter data for student %d:\n",i+1);
        printf("Name: ");
        scanf("%s",a[i].name);
        printf("Roll: ");
        scanf("%d",&a[i].roll);
        printf("Address: ");
        scanf("%s",a[i].addr);
        printf("Phone no: ");
        scanf("%d",&a[i].phone);
        fwrite(&a[i],sizeof(a[i]),1,fp);
    }
    rewind(fp);
    for(i=0;i<n;i++)
        fread(&c[i],sizeof(c[i]),1,fp);
    for(i=0;i<n-1;i++)
        for(j=1;j<n;j++)
            if (strcmp(c[i].name,c[j].name)>0)
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
    system("cls");
    printf("Sorted list: \n\n");
    printf("\tName\t\tRoll\t\tAddress\t\tPhone no: \n"
           "------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
        printf("%d)\t%s\t\t%d\t\t%s\t\t%d\n",i+1,c[i].name,c[i].roll,c[i].addr,c[i].phone);
    fclose(fp);
    getch();
    return 0;
}
