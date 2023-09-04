#include<stdio.h>
int main()
{
    int arr1[50][50],arr2[50][50],arr3[50][50],i,j,n;
    
        printf("Input the order of the square matrix : ");
        scanf("%d",&n); 
  
        printf("enter elements in the first matrix :");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - %d,%d : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
        printf("Input elements in the second matrix :");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - %d,%d : ",i,j);
	           scanf("%d",&arr2[i][j]);
            }
        
    	for(i=0;i<n;i++)
        	for(j=0;j<n;j++)
            	arr3[i][j]=arr1[i][j]+arr2[i][j];
   		printf("\nThe Addition of two matrix is : ");
   		for(i=0;i<n;i++)
		{
       		printf("\n");
        for(j=0;j<n;j++)
		{
       	 printf("%d ",arr3[i][j]);
	    }
     
	    }
		}
}
