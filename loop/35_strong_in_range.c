#include<stdio.h>
int main()
{
	int min,max,number,n,r,i,fact,sum,j;
	printf("enter minimun :");
	scanf("%d",&min);
	printf("enter maximum : ");
	scanf("%d",&max);
	for(i=min;i<=max;i++)
	{
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
		if(number==sum)
			printf("%d\n",number);
		
	}
}
