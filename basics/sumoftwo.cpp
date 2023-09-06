#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter the first number - ");
	scanf("%d",& a);
	printf("enter the second number - ");
	scanf("%d",& b);
	printf("enter the third number - ");
	scanf("%d",&c);
	
	sum = a + b + c;
	printf("the sum of %d, %d and %d is %d",a,b,c,sum);
	
}
