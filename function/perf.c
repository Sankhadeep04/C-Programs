#include<stdio.h>
int perfectinrange(int,int);
int main()
{
	int min,max;
	printf("Enter the starting range:");
	scanf("%d",&min);
	printf("enter the ending range :");
	scanf("%d",&max);
	perfectinrange(min,max);
	
}
int perfectinrange(int min,int max)
{
	int i,sum=0,rem,j;
	for(i=min;i<max;i++)
	{
		for(j=1;j<max;j++)
		{
			rem=i%j;
			if(rem==0)
			{
				sum+=i;
			}
		}
		if(sum==min)
		{
			printf("%d ,",i);
		}
	}
}
