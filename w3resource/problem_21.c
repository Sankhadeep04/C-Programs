#include<stdio.h>
int main()
{
	int n,i,j,p,sum=0;
	printf("enter the number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=1;
		for(j=1;j<=i;j++)
		{
			p=p*10;
		}
		if(i<=n)
		{
			sum+=p-1;
		}
	}
	printf("sum of series : %d",sum);
}
