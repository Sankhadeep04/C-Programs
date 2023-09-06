#include<stdio.h>
int main()
{
	int n,i,sum=0,x=1;
	printf("enter the number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=x;
		x=(x*10+1);
	}
	printf("the sum of series : %d",sum);
}
