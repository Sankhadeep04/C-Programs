#include<stdio.h>
int main()
{
	int i,j,n,k,ctr=0,arr1[100];
	printf("enter the total numbers of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter %d element : ",i);
		scanf("%d",&arr1[i]);
	}
	printf("unique elements in an array are: ");
	for(i=0;i<n;i++)
	{
		ctr=0;
	    for(j=0,k=n; j<k+1; j++)
	        {
	            if (i!=j)
	            {
			       if(arr1[i]==arr1[j])
	              {
	                 ctr++;
	               }
	             }
	        }
	       if(ctr==0)
	        {
	          printf("%d ",arr1[i]);
	        }
	    }
}
