#include<stdio.h>
int main()
{
	int i,j,n,arr1[100],temp;
	printf("enter the total number of elements to print in decending order : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the %d number : ",i);
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr1[i]<arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	printf("elements in decending order - ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
}
