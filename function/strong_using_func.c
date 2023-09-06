#include<stdio.h>
int is_strong(int);
int count(int);
int fact(int);
int main()
{
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	if(is_strong(n))
	{
		printf("Yes");
		
	}
	else
	{
		printf("No");
	}
}
int count(int n)
{
	int c;
	while(n>10)
	{
		n/=10;
		c++;
	}
	return c;	
}
int fact(int n)
{
	int  i, fact;
    i=1;
    while(i<=count(n))
    {
        fact=fact*i;
        i++;
    }
    return fact;
}
int is_strong(int n)
{
	int temp,sum;
	sum=0;temp=n;
	while(n>0)
	{
		sum+= fact(n%10);
		n/=10;
	}
	return temp==sum;
}
