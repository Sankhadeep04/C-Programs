#include<stdio.h>
void name(char* );
int main()
{
	char str[100];
	printf("enter any name :");
	scanf("%s",&str);
	name(str);
	printf("in format the name is :%s",str);
}
void name(char str[])
{
	int i;
	for(i=1;str[i]!='\0';i++)
	{
		if(str[0]>=97 && str[0]<=122)
		{
			str[0]-=32;
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
	}
}
