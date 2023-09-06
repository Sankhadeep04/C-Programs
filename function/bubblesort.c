#include<stdio.h>
void bubble_sort(int* ,int );
int main()
{
	int i,n,arr[50];
	printf("enter the total number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers : ");
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	printf("Sorted list :\n");
    for (i=0;i<n;i++)
    	printf("%d\n",arr[i]);
}
void bubble_sort(int arr[],int n)
{
	int i,j,temp;
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
	
}

