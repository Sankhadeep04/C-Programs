#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr;
	int i,m,n = 10;
	
//	arr = (int*)malloc(sizeof(int)*n);
	arr = (int*)calloc(n,sizeof(int));
	if(arr != NULL)
	{
		for(i=0;i<n;i++)
		{
			arr[i] = i+1;
		}
		
		printf("Before realloc : \n");
		for(i=0;i<n;i++)
		{
			
			printf("%d\n",arr[i]);
		}
		m = n+5;
		
		arr = (int*)realloc(arr,m*sizeof(int));
		
		for(i=0;i<m;i++)
		{
			arr[i] = i+1;
		}
		
		printf("After realloc : \n");	
		for(i=0;i<m;i++)
		{
		
			printf("%d\n",arr[i]);
		}
		
		free(arr);
	}
	else
	{
		printf("Memory allocation failed !");
	}
}
