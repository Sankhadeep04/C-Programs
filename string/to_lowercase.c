#include<stdio.h>
void lowercase(char*);
int main()
{
	char name[100];
	printf("enter the name in upper case :");
	scanf("%s",&name);
	lowercase(name);
	printf("in lowercase the name is : %s",name);
}
void lowercase(char name[])
{
	int i;
	for(i=0;name[i]>=65 && name[i]<=90;i++)
	{
		name[i]+=32;
	}
}
