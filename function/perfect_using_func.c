#include<stdio.h>
int is_perfect(int);
int main()
{
	int n;
	printf("enter number to check if its perfect : ");
	scanf("%d",&n);
	if(is_perfect(n))
	{
		printf("its perfect number.");
	}
	else
	{
		printf("its not a perfect number -_-");
	}
}
int is_perfect(int n)
{
	int rem,sum=0,i;
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum+=i;
		}
	}
	return sum==n;
}
