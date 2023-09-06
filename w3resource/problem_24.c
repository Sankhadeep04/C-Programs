#include<stdio.h>
int main()
{
	int n,x,i,j,p,sum;
	printf("input the number of terms and x  : ");
	scanf("%d%d",&n,&x);
	sum=1;
	for (i=1;i<=n;i++)
	{
		p=1;
		for (j=1;j<=i;j++)
		{
			p=p*x;
		}
		if (i%2==0)
		{
			sum+=p;
		}
		else 
		{
			sum-=p;
		}
		printf("%d",sum); 
	}
	
}
