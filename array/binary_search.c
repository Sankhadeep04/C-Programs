#include<stdio.h>
int main()
{
	int i,low,mid,high,n;
	int search,arr[100];
	printf("enter number of elements : ");
	scanf("%d",&n);
	
	printf("enter %d intigers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter value to find : ");
	scanf("%d",&search);
	
	low=0;
	high=n-1;
	
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]<search)
		{
			low=mid+1;
		}
		else if(arr[mid]==search)
		{
			printf("%d found at location %d",search,mid+1);
			break;
		}
		else
		{
			high=mid-1;
		}
		
	}
	if(low>high)
	{
		printf("%d is not present in the array",search);
	}
	

} 
