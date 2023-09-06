#include<stdio.h>
void insert(int* , int ,int ,int );
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
	insert(arr,n,j,p);
	printf("\nAfter Insert the element is :\n");
    for(i=0;i<=n;i++)
      printf("%d ",arr[i]);

}
void insert(int arr[],int n,int j, int p)
{
	int i;
	for(i=n;i>=p;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[p-1]=j;
}
