#include<stdio.h>
int is_leapyear(int);
int main()
{
	int n;
	printf("enter a year to check if its leapyear or not : ");
	scanf("%d",&n);
	
	if(is_leapyear(n))
	{
		printf("Its a leapyear");
	}
	else
	{
		printf("its not a leapyear");
	}
}
int is_leapyear(int n)
{
	if((n%400==0)||((n%4==0)&&(n%100!=0)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
