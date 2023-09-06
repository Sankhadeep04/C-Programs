#include<stdio.h>
int main()
{
	int i,j,k,r1,r2,c1,c2,sum=0;
	int arr1[100][100],arr2[100][100],arr3[100][100];
	
	printf("enter the rows and columns of the first matrix : ");
	scanf("%d %d",&r1,&c1);
	printf("\nenter the rows and columns of the second matrix : ");
	scanf("%d %d",&r2,&c2);
	
	if(c1!=r2)
	{
		printf("the multiplication of the matrix is not possible");
	}
	else
	{
		printf("first matrix : ");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("\nenter elements %d : %d : ",i+1,j+1);
				scanf("%d",&arr1[i][j]);
			}
		}
		printf("second matrix : ");
		for(i=0;i<r2;i++)	
		{
			for(j=0;j<c2;j++)
			{
				printf("\nenter elements %d : %d : ",i+1,j+1);
				scanf("%d",&arr2[i][j]);
			}
		}
		printf("\nThe First matrix is :\n");
  		for(i=0;i<r1;i++)
    		{
      			printf("\n");
      			for(j=0;j<c1;j++)
          		printf("%d\t",arr1[i][j]);
    		}
  
  		printf("\nThe Second matrix is :\n");
  		for(i=0;i<r2;i++)
    		{
      			printf("\n");
      			for(j=0;j<c2;j++)
      			printf("%d\t",arr2[i][j]);
    		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				arr3[i][j]=0;
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c2;j++)
					{
						sum=0;
						for(k=0;k<c1;k++)
						{
							sum=sum+arr1[i][k]*arr2[k][j];
							arr3[i][j]=sum;
						}
					}
				}
			}
		}
		printf("\nthe multiplication of two matrix is :");
		for(i=0;i<r1;i++)
		{
			printf("\n");
			for(j=0;j<c2;j++)
			{
				printf("%d ",arr3[i][j]);
			}
		}
	}
	
}
