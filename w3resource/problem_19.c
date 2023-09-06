#include<stdio.h>
int main()
{
	int n,i;
	float sum=0;
	printf("enter the nuber of terms : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if (i<n)
		{
			printf("1/%d+",i);
		}
		else 
		{
			printf("1/%d",i);
		}
		sum+=1/(float)i;
	}
	printf("sum of series : %f",sum);
}
