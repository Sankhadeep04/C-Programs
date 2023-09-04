#include<stdio.h>
int main()
{
	int arr[6],n=5,key,i,flag=0;
	printf("enter the no. of elements : ");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("element you want to find :");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("found at position %d",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("not found :");
	}
}
