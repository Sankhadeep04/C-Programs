#include<stdio.h>
int PrimeInRange(int,int);
int main()
{
	int min,max;
	printf("Enter the starting range:");
	scanf("%d",&min);
	printf("enter the ending range :");
	scanf("%d",&max);
	PrimeInRange(min,max);
	
}
int PrimeInRange(int min,int max)
{
	int i,flag,j;
	for(i=min;i<=max;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("prime numbers in range are :%d\n",i);
		}
	}
}
