#include<stdio.h>
int main()
{
	int i,j,n,arr[50];
	printf("enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers to print : ");
		scanf("%d",&arr[i]);
	}
	printf("numbers are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
