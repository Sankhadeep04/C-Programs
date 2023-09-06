#include<stdio.h>
int main()
{
	int number;
	printf("enter the number to check if its even or odd : ");
	scanf("%d",&number);
	if (number%2==0)
	{
		printf("the number %d is even number\n",number);
	}
	else
	{
		printf("the number %d is odd number\n",number);
	}
}
