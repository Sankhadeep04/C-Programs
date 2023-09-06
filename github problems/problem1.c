#include<stdio.h>
int main()
{
	int i,n;
	int arr[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",& arr[i]);
	}
	
	printf("recorded elements are : ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
