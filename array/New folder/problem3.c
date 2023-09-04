#include<stdio.h>
int main()
{
	int i,j,n,sum=0,arr[100];
	printf("enter the numbers of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers to sum : ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("the sum is :%d",sum);
}
