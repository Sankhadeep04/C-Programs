#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    printf("enter elements in the matrix :\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
	      printf("element : %d,%d : ",i,j);
	      scanf("%d",&arr[i][j]);
    	}
    }  
 
    printf("The matrix is : \n");
    for(i=0;i<3;i++)
    {
      printf("\n");
      for(j=0;j<3;j++)
      {
      	 printf("%d  ",arr[i][j]);
	  }
    }
}

