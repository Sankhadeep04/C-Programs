#include<stdio.h>
int main()
{
	int first,second,third,fourth;
	printf("enter the first number : ");
	scanf("%d",&first);
	printf("enter the second number : ");
	scanf("%d",&second);
	printf("enter the thrd number : ");
	scanf("%d",&third);
	if((first>second)&&(first>third))
	{
		fourth=first;
	}
	else if((second>first)&&(second>third))
	{
		fourth=second;
	}
	else if ((third>second)&&(third>first))
	{
		fourth=third;
	}
	printf("the maximum number is %d",fourth);
	
}
