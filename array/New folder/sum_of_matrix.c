#include<stdio.h>
int main()
{
	int i,j,n,arr1[10][10],arr2[10][10],arr3[10][10];
	printf("enter the size of matrix : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the frist matrix elements %d,%d : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nenter the second matrix elements %d,%d : ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
	
}
