#include<stdio.h>
int main()
{
	int i,j,n,temp,arr[50];
	printf("enter the total number of elements : ");
	scanf("%d",&n);
	printf("store the numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
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
	printf("Sorted list :\n");

    for (i=0;i<n;i++)
    	printf("%d\n", arr[i]);
}
