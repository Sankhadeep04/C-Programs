#include<stdio.h>
int main()
{
	int i,j,n,k;
	int arr[100],arr1[100],arr2[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			arr1[j]=arr[i];
			j++;
		}
		else
		{
			arr2[k]=arr[i];
			k++;
		}
		
	}
	printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr1[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr2[i]);
    }
    printf("\n\n");	
}
