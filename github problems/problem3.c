#include<stdio.h>
int main()
{
	int arr[100],arr1[100];
	int i,j,n;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		arr1[i]=arr[i];
	}
	
	printf("copied elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr1[i]);
	}
}
