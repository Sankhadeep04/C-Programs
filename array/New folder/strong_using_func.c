#include<stdio.h>

int is_strong(int);
int main()
{
	int n;
	printf("enter the number to check its trong or not : ");
	scanf("%d",&n);
	
	if(is_strong(n))
	{
		printf("yes its strong number");
	}
	else
	{
		printf("no! its not a strong number");
	}
}
int is_strong(int n)
{
	int fact=1,sum=0,i,rem,temp=n;
	while (n!=0)
	{
		
		rem=n%10;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;	
		}
		sum=sum+fact;
		fact=1;
		n/=10;
	}
	return sum==temp;
}
