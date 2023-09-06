#include <stdio.h>
struct student
{
    char name[100];
    int marks;
};
void info(struct student list[],int a);
void show(struct student list[],int a);
void bubble_sort(struct student list[],int a);
int main()
{
    struct student data[100];
    int n;
    printf("Enter Number of record: ");
    scanf("%d",&n);
    info(data,n);
    bubble_sort(data,n);
    printf("\nThe Student Record according to their marks Is:");
    show(data,n);
} 
void info(struct student list[100],int a)
{
    int i;
    for (i=0;i<a;i++)
    {
        printf("Enter data of the student =%d\n",i+1);
        printf("Enter name : \n");
        scanf("%s",&list[i].name);
        printf("Enter marks : \n");
        scanf("%d",&list[i].marks);
    } 
}
void show(struct student list[100],int a)
{
    int i;
    printf("\n\nRollno\tName\tMarks\n");
    for (i=0;i<a;i++)
    {
        printf("%d\t%s\t%d\n",i+1,  list[i].name, list[i].marks);
    } 
}
void bubble_sort(struct student list[100],int a)
{
    int i, j;
    struct student temp;
    for (i=0;i<a-1;i++)
    {
        for(j=0;j<(a-1-i);j++)
        {
            if(list[j].marks<list[j+1].marks)
            {
                temp=list[j];
                list[j]=list[j + 1];
                list[j+1]=temp;
            } 
        }
    }
}
