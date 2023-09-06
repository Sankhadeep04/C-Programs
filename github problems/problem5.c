#include<stdio.h>
int main()
{
	int i,j,n,count=1;
	int arr[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",& arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count=0;
				break;
			}
		}
	}
	if(count==1)
	{
		printf("all unique elements are %d",arr[i]);
	}
	
}
