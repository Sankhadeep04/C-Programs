#include<stdio.h>
int main()
{
	int a=1,b,sum=0;
	printf("enter limit : ");
	scanf("%d",&b);
	while (a<=b)
	{
		if (a%2==0)
		{
			sum=sum+a;
		}
		a++;


	}		
	printf("the sum of even numbers are :%d\n",sum);

	
	
}
