#include<stdio.h>
int stronginrange(int,int);
int main()
{
	int min,max,i;
	printf("enter minimun :");
	scanf("%d",&min);
	printf("enter maximum : ");
	scanf("%d",&max);
	for(i=min;i<=max;i++)
	{
		if(stronginrange(i))
		{
			printf("strong numbers in range are :%d, ",i);
		}
	}
}
int stronginrange(int min,int max)
{
	int number,n,r=0,i,fact,sum,j;

		n=i;
		number=n;
		sum=0;
		while(n!=0)
		{
			r=n%10;
			fact=1;
			for(j=1;j<=r;j++)
			{
				fact*=j;
				
			}
			sum+=fact;
			n/=10;
			
		}
		return(number==sum);
}
