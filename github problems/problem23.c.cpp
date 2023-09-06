#include<stdio.h>
int main()
{
	int i,j,row,col,arr1[50][50],arr2[50][50];
	printf("enter the row to transpose : ");
	scanf("%d",&row);
	printf("enter the column : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elements %d %d : ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nthe matrix is : \n");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%d ",arr1[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr2[j][i]=arr1[i][j];
		}
	}
	printf("\nthe transpose matrix is : \n");
	for(i=0;i<col;i++)
	{
		printf("\n");
		for(j=0;j<row;j++)
		{
			printf("%d ",arr2[i][j]);
		}
	}
	
}
