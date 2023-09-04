#include<stdio.h>
int main()
{
	int i,n,arr[100];
	printf("enter the numbers of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the numbers :");
		scanf("%d",&arr[i]);
	}
	printf("numbers in reverse are: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	//printf("\n");
}
