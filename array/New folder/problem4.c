#include<stdio.h>
int main()
{
	int i,n,arr1[100],arr2[100];
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the numbers : ");
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("\nnumbers in the first array are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\nnumbers in the second array are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n\n");
	
}
