#include<stdio.h>
int main()
{
	int i,j,n,temp,arr[100];
	printf("enter the number of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers : ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("in ascending order its : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
