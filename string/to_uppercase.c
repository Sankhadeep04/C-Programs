#include<stdio.h>
void uppercase(char*);
int main()
{
	char name[100];
	printf("enter the name in lower case :");
	scanf("%s",&name);
	uppercase(name);
	printf("in uppercase the name is :%s",name);
}
void uppercase(char name[])
{
	int i;
	for(i=0;name[i]>=97 && name[i]<=122;i++)
	{
		name[i]-=32;
	}
}
