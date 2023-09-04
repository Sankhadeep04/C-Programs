#include<stdio.h>
int main()
{
	int i,j,n,c,arr1[50],d=0,arr2[50];
	printf("enter the number of elements : ");
	scanf("%d",&n);
	printf("enter the numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr1[i]==arr1[j])
			{
				if(arr2[j]==0)
				{
					arr2[i]++;
				}
				else
				{
					break;
				}
			}
		}

	}
	
	for(i=0;i<n;i++)
	{
		if(arr2[i]!=0)
			printf("%d : %d\n",arr1[i],arr2[i]);
	}
}

