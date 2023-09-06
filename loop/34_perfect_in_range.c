#include<stdio.h>
int main()
{
	int min,max,n,sum,i,j;
	printf("enter minimun :");
	scanf("%d",&min);
	printf("enter maximum : ");
	scanf("%d",&max);
	for(i=min;i<=max;i++)
	{
		n=i;
		sum=0;
		
		for(j=1;j<=n/2;j++)
		{
			if(n%j==0)
				sum+=j;
		}
		if(n==sum)
			printf("\n perfect numbers are %d",n);
	}
}
