#include<stdio.h>
int main()
{
	int number;
	printf("enter the number to check if its positive,negative or zero : ");
	scanf("%d",&number);
	if (number>0)
	{
		printf("the number %d is poeitive",number);
	}
	else if (number<0)
	{
		printf("the number %d is negative",number);
	}
	else
	{
		printf("the number is zero");
	}
}
