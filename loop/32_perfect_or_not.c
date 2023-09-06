#include<stdio.h>  
int main()  
{
	int rem,n,sum=0,i;
	
	printf("enter to check if its perfect or not : ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		printf("its perfect number");
	}
	else
	{
		printf("its not a perfect number");
	}
}
