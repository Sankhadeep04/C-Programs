#include<stdio.h>
int main()
{
	int i,n,j,arr[100],lrg,lrg2;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers : ");
		scanf("%d",&arr[i]);
	}
	lrg=0;
	for(i=0;i<n;i++)
	{
		if(lrg<arr[i])
		{
			lrg=arr[i];
			j=i;	
		}
	}
	lrg2=0;
	for(i=0;i<n;i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(lrg2<arr[i])
			{
				lrg2=arr[i];
			}
		}
	}
	printf("The second largest element is : %d",lrg2);
}
