#include<stdio.h>
int main()
{
	int i,j,n,min=0,max=0;
	int arr[100],arr1[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("min - %d",min);
	printf("\nmax - %d",max);
}
