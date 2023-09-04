#include<stdio.h>
int main()
{
	int i,j,n,min,max,arr[100];
	printf("enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers to find the maximum & minimum amongst them : ");
		scanf("%d",& arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("the maximum number amongst them is : ",max);
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("the minimum number amongst them is : ",min);
}
