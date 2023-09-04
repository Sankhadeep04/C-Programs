#include<stdio.h>
int main()
{
	int i,j,n,arr[3][3];
	printf("enter elements to make a 2d 3X3 matrix :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("elements : %d,%d : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("the 2d matrix is : ");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
	}
}
