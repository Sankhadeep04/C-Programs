#include<stdio.h>
int main()
{
	int sp,cp,c;
	printf("enter the cost price : ");
	scanf("%d",&cp);
	printf("enter the selling price : ");
	scanf("%d",&sp);
	if (sp>cp)
	{
		c=sp-cp;
		printf("the profit is %d",c);
	}
	else if (cp>sp)
	{
		c=cp-sp;
		printf("the loss is %d",c);
	}
	else 
	{
		printf("there is no profit & loss");
	}
}
