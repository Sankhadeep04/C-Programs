#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int arr[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("enter the numbers to show in ascending order : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("in ascending order : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
}
