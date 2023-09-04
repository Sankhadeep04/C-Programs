#include<stdio.h>
int main()
{
	int i,j,n,arr1[100][100];
	printf("enter the size of the array to print 0 in lower triangular matrix: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the row:>%d & col:>%d elements : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%d",arr1[i][j]);
			}
			else
			{
				printf("%d",0);
			}
		}
	}
}
