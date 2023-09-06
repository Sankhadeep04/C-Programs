#include<stdio.h>
int main()
{
	int i,j,n,count=0;
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
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
		}
	}
	printf("total number of duplicate elements are %d",count);
}
