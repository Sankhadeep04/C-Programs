#include<stdio.h>
int main()
{
	int i,j,p,n,arr[100];
	printf("enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d number :",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the number to be inserted :");
	scanf("%d",&j);
	printf("enter the position : ");
	scanf("%d",&p);
	
	for(i=n;i>=p;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[p]=j;
	printf("\nAfter Insert the element is :\n");
    for(i=0;i<=n;i++)
      printf("%d ",arr[i]);

}
