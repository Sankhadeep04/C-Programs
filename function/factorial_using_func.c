#include<stdio.h>
int factorial(int);
int main()
{
	int n,a;
	printf("Enter a number to get its factorials :");
	scanf("%d",&n);
	a = factorial(n);
	printf("factorial of the number is: %d",a);
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
