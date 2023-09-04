#include<stdio.h>
int main()
{
	int i,n,sum=0,arr[50];
	printf("enter total numbers :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("%d",sum);
}
