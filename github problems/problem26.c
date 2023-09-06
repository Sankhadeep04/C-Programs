#include<stdio.h>
int main()
{
	int i,j,n,arr1[50][50],arr2[50],arr3[50],sum=0;
	
	printf("enter the size of square matrix to sum right diagonals : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter elements %d : %d : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("The matrix is :\n");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    printf("%d  ",arr1[i][j]);
	    printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		arr2[i]=0;
		for(j=0;j<n;j++)
		{
			arr2[i]+=arr1[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		arr3[i]=0;
		for(j=0;j<n;j++)
		{
			arr3[i]+=arr1[j][i];
		}
	}
	printf("The sum or rows and columns of the matrix is :\n");
    	for(i=0;i<n;i++)
    	{
			for(j=0;j<n;j++)
	    	printf("  %d",arr1[i][j]);
	   		printf("  %d",arr2[i]);
	   		printf("\n");
       	}
       	printf("\n");
	    for(j=0;j<n;j++)
        {
	        printf(" %d",arr3[j]);
        }
}
