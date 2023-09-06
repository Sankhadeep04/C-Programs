#include<stdio.h>
//add new value unsorted 
int main()
{
	int i,j,n,newval,p;
	int arr[100];
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number to add : ");
	scanf("%d",&newval);
	printf("enter the position : ");
	scanf("%d",& p);
	
	for(i=n;i>=p;i--)
    {
    	arr[i]= arr[i-1];
	}
    arr[p-1]=newval;
    
    printf("after adding the new elements are : ");
    for(i=0;i<n+1;i++)
    {
    	printf("\n%d",arr[i]);
	}
}
