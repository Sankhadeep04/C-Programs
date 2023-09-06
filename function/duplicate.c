#include<stdio.h>
int duplicate(int* , int );
int main()
{
	int i,j,n,ctr=0,arr1[100];
	printf("enter the total numbers of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter %d element : ",i);
		scanf("%d",&arr1[i]);
	}
	ctr = duplicate(arr1,n);
    
	printf("total duplicate number in this array is : %d",ctr);
}
int duplicate(int arr1[], int n)
{
	int i,j,arr2[100],ctr=0 ;
	
	for(i=0;i<n; i++)
    {
		arr2[i]=0;
    }
    for(i=0;i<n; i++)
    {
		for(j=0;j<n;j++)
		{
			if(arr1[i]==arr1[j])
			{
				if(arr2[j]!=0)
					break;
				arr2[i]++;
			}
		}
    }
	for(i=0;i<n;i++)
    {
      	if(arr2[i]>1)
		{
			ctr++;
		}
    }
	return ctr;	
}
