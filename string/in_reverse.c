#include<stdio.h>
void reverse(char*);
int main()
{
	char name[100];
	
	printf("enter name to print in reverse : ");
	scanf("%s",&name);
	reverse(name);
	printf("in reverse the name is : %s",name);

}
void reverse(char name[])
{
	int i,j,n,count=0,temp;
	for(i=0;name[i]!='\0';i++);
	for(j=0;j<=i/2 ;j++)
	{
		temp=name[j];
		name[j]=name[count-1-j];
		name[count-1-j]=temp;
	}
}
