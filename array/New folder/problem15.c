#include<stdio.h>
int main()
{
	int i,n,p,arr[100];
	printf("emter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers : ");
		scanf("%d",&arr[i]);
	}
	printf("enter the position to delete element : ");
	scanf("%d",&p);
	
	for(i=p-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("after deleting the list is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
