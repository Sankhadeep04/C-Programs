#include<stdio.h>
int gcd(int ,int );
int main()
{
	int m,n,r;
	
	printf("Enter the first number : ");
	scanf("%d",&m);
	printf("Enter the second number : ");
	scanf("%d",&n);
	
	r = gcd(m,n);
	printf("GCD = %d ",r);
}
int gcd(int a,int b)
{
	if(b==0)
	{
		return(a);
	}
	else if(a<b)
	{
		(gcd(b,a));
	}
	else
	{
		return(gcd(b,a%b));
	}
}
