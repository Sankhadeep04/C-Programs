#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("enter the number to check its factorial : ");
	scanf("%d",&n);
	
	printf("the factorial of %d is : %d",n,fact(n));
}
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return (num*fact(num-1));
	}
}
