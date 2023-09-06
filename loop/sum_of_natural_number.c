#include<stdio.h>
int main()
{
	int a=1,b,sum=0;
	
	printf("enter any number : ");
	scanf("%d",&b);
	
	while (a<b)
	{
		sum=sum+b;
		b++;
	printf("sum of natural number : %d",sum);
	
	}
}	

