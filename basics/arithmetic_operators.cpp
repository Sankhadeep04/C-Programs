#include<stdio.h>
int main()
{
	int a,b;
	int sum,sub,multi,mod,div;
	printf("enter a number - ");
	scanf("%d",&a);
	printf("enter another number");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	mod=a%b;
	
	printf("sum of %d and %d is %d\n",a,b,sum);
	printf("subtraction of %d and %d is %d\n",a,b,sub);
	printf("multiplication of %d and %d is %d\n",a,b,multi);
	printf("division of %d and %d is %d\n",a,b,div);
	printf("modulus of %d and %d is %d\n",a,b,mod);
}
