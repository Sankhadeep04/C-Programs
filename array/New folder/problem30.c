#include<stdio.h>
int main()
{
	int i,j,r1,r2,c1,c2,arr1[50][50],arr2[50][50];
	
	printf("enter the rows and columns of the first matrix : ");
	scanf("%d",&r1,&c1);
	printf("enter the rows and columns of the second matrix : ");
	scanf("%d",&r2,&c2);
	
	for(i=0;i<r1;i++);
	{
		for(j=0;j<c1;j++);
		{
			printf("enter the row %d & col %d elements for the 1st matrix : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	for(i=0;i<r2;i++);
	{
		for(j=0;j<c2;j++);
		{
			printf("enter the row %d & col %d elements for the 2nd matrix : ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	if(r1==r2 && c1==c2)
	{
		for(i=0;i<r1;i++)
    	{
     		for(j=0;j<c2;j++)
     		{
			if(arr1[i][j]!=brr1[i][j])
			{
	   			flag=0;
	   			break;
			}
     		}
   	   }

	}
	if(flag==1)
	{
		printf("two matrix are equal;");
	}
	else
	{
		printf("two matrix are not equal");
	}
}
