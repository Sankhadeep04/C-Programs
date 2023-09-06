#include<stdio.h>
int main()
{
	int i,j,r,c;
	int arr[50][50],arr1[50][50],arr2[50][50];
	
	printf("enter the number of rows : ");
	scanf("%d",&r);
	printf("enter the number of columns : ");
	scanf("%d",&c);
	printf("enter the first array elements : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nenter elements %d %d : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("enter second array elements : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nenter elements %d %d : ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr2[i][j]=arr[i][j] - arr1[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
	}
	printf("\n\n");
}
