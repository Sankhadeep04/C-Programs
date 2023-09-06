#include<stdio.h>
int main()
{
	int a=1,b,sum=0;
	
	printf("enter any number : ");
	scanf("%d",&b);
	
	while (a<=b)
	{
		sum=sum+a;
		a++;
	}
	printf("sum of natural number : %d",sum);
}	
