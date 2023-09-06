#include<stdio.h>
int main()
{
	int i,j,n,sml,sml2;
	int arr[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sml=arr[0];
	for(i=0;i<n;i++)
	{
		if(sml>arr[i])
		{
			sml=arr[i];
			j = i;
		}
	}
	sml2=9999;
	for(i=0;i<n;i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(sml2>arr[i])
			{
				sml2=arr[i];
			}
		}
	}
	printf("the second smallest element in the array is %d",sml2);
}
