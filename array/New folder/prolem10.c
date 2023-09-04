#include<stdio.h>
int main()
{
	int i,j=0,k=0,n,arr1[100],arr2[100],arr3[100];
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the %d number to check if its even or odd : ",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		
		if(arr1[i]%2==0)
		{
			arr2[j++]=arr1[i];
		}
		else
		{
//			printf("%d",arr1[i]);
			arr3[k++]=arr1[i];
		}
	}
	
	printf("%d",arr3[0]);
	
	printf("The Even numbers are : \n");
    for(i=0;i<j;i++)
    {
		printf("%d ",arr2[i]);
    }

    printf("\n The Odd numbers are :\n");
    for(i=0;i<k;i++)
    {
		printf("%d ", arr3[i]);
    }	

}
