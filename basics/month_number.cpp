#include<stdio.h>
int main()
{
	int m;
	printf("enter the month number : ");
	scanf("%d",&m);
	if (m==1)
	{
		printf("31 days");
	}
	else if (m==2)
	{
		printf("28 days");
	}
	else if (m==3)
	{
		printf("31days");
	}
	else if (m==4)
	{
		printf("30days");
	}
	else if (m==5)
	{
		printf("31 days");
	}
	else if (m==6)
	{
		printf("30 days");
	}
	else if (m==7)
	{
		printf("31days");
	}
	else if (m==8)
	{
		printf("31 days");
	}
	else if (m==9)
	{
		printf("30 days");
	}
	else if (m==10)
	{
		printf("31days");
	}
	else if (m==11)
	{
		printf("30 days");
	}
	else if (m==12)
	{
		printf("31 days");
	}
	else
	{
		printf("its not a month number");
	}
}
