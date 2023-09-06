#include<stdio.h>
struct student
{
    char name[100];
    int marks;
    int roll;
};
void info(struct student list[],int);
void print(struct student list[],int);
void bubble_sort(struct student list[],int);
int main()
{
    struct student data[100];
    int n;
    printf("Enter total Number of students: ");
    scanf("%d",&n);
    info(data,n);
    bubble_sort(data,n);
    printf("\nThe Student Record according to their roll is:");
    print(data,n);
    
} 
void info(struct student list[100], int a)
{
    int i;
    for (i=0;i<a;i++)
    {
        printf("\nEnter name : ");
        scanf("%s",&list[i].name);
        printf("\nEnter marks : ");
        scanf("%d",&list[i].marks);
        printf("\nEnter student roll : ");
        scanf("%d",&list[i].roll);
    } 
}
void print(struct student list[100], int a)
{
    int i;
    for (i=0;i<a;i++)
    {
     	printf("\nroll %d   |Name : %s  |marks : %d\n",list[i].roll ,list[i].name, list[i].marks);
    } 
}
void bubble_sort(struct student list[100], int a)
{
    int i, j;
    struct student temp;
    for (i=0;i<a-1;i++)
    {
        for(j=0;j<(a-1-i);j++)
        {
            if(list[j].roll>list[j+1].roll)
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            } 
        }
    }
}
