#include <stdio.h>
int second_largest(int* ,int ,int );
int main()
{
	int arr1[50],n,i,j=0,x;
	
    printf("Input the size of array : ");
    scanf("%d", &n);
	printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
        {
	      	printf("element - %d : ",i);
	      	scanf("%d",&arr1[i]);
	    }
	x = second_largest(arr1,n,x);
	printf("The Second largest element in the array is :  %d ", x);

}
int second_largest(int arr1[],int n,int s)
{
	int i,j,lrg=0;
	for(i=0;i<n;i++)
	{
	    if(lrg>arr1[i])
		{
	        lrg=arr1[i];
	        j = i;
	    }
	}
    for(i=0;i<n;i++)
	{
	    if(i==j)
	        {
	          i++;
			  i--;
	        }
	    else
	        {
	        	if(s>arr1[i])
		     	{
	               s=arr1[i];
	            }
	        }
  	}
  	return s;

}
