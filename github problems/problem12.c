#include<stdio.h>
//insert new value in an array
int main()
{
	int i,j,n,temp,p,newval;
	int arr[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the new number to add : ");
	scanf("%d",&newval);
	
	for(i=0;i<n;i++)
	{
		if(newval<arr[i])
		{
			p=i;
			break;
		}
		else
		{
			p=i+1;
		}
	}
	for(i=n+1;i>=p;i--)
	{
		arr[i]=arr[i-1];
		
	}
	arr[p]=newval;
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
	printf("after adding the elements are : ");
	for(i=0;i<n+1;i++)
	{
		printf("\n %d",arr[i]);
	}
}
