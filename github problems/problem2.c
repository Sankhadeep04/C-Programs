#include<stdio.h>
int main()
{
	int i,n,sum=0;
	int arr[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",& arr[i]);
		sum+=arr[i];
	}
	printf("sum of elements are : %d",sum);
}
