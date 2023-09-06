#include<stdio.h>
int main()
{
	int a=1,b,sum=0;
	printf("enter the limit : ");
	scanf("%d",&b);
	while (a<=b)
	{
		if (a%2!=0)
		{
			sum=sum+a;
		}
		a++;
	}
	printf("the sum of odd number from n is :%d",sum);
}
