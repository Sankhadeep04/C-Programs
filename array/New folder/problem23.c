#include<stdio.h>
int main()
{
	int i,j,n,arr1[100][100],sum=0;
	printf("enter the size of square matrix to sum right diagonals : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the row:>%d & col:>%d elements : ",i,j);
			scanf("%d",&arr1[i][j]);
			if(i==j)
			{
				sum+=arr1[i][j];
			}
		}
	}
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    printf("%d",arr1[i][j]);
	    printf("\n");
	}
 
       printf("Addition of the right Diagonal is : %d",sum);
}

