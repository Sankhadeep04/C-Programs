#include<stdio.h>
int main()
{
	int temp,i,j,n;
	int arr[100];
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("enter number to show in decending order :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j+1]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("in descending order the elements are : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
}
