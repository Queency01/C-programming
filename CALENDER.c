#include<stdio.h>
#include<stdlib.h>
struct CALENDER
{
    char *day;
    int dd,mm,yyyy;
    char *desc;
};
struct CALENDER* cal;
int n,n1,n2;
void create()
{
    printf("Enter the number of days\n");
    scanf("%d",&n);
    cal=(struct CALENDER*)malloc(n*sizeof(struct CALENDER));
}
void read()
{
    printf("Enter the data for a week\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the size of days\n");
        scanf("%d",&n1);
        printf("Enter the size of description\n");
        scanf("%d",&n2);
        cal[i].day=(char*)malloc(n1*sizeof(char));
        cal[i].desc=(char*)malloc(n2*sizeof(char));
        printf("Enter Day Date and Description for a day\n");
        scanf("%s%d%d%d",cal[i].day,&cal[i].dd,&cal[i].mm,&cal[i].yyyy);
        fflush(stdin);
        gets(cal[i].desc);
    }
}
void display()
{
    printf("Entered data for a week\n");
    printf("\n DAY \t DATE \t \t DESCRIPTION");
    printf("\n__________________________________________________________________________\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t%d-%d-%d\t",cal[i].day,cal[i].dd,cal[i].mm,cal[i].yyyy);
        puts(cal[i].day);
    }
}
void main()
{
    create();
    read();
    display();
}
