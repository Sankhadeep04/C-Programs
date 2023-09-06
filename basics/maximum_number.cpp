#include<stdio.h>
int main()
{
	int first,second;
	
	printf("enter the first number : ");
	scanf("%d",&first);
	printf("enter the second number : ");
	scanf("%d",&second);
	if (first>second)
	{
		printf("the maximum number is %d",first);
	}
	else
	{
		printf("the maximum number is %d",second);
	}
}
