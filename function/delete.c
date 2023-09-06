#include<stdio.h>
void delete(int*, int ,int );
int main()
{
	int i,n,p,arr[100];
	printf("emter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the numbers : ");
		scanf("%d",&arr[i]);
	}
	printf("enter the position to delete element : ");
	scanf("%d",&p);
	delete(arr,n,p);
	printf("after deleting the list is : \n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
}
void delete(int arr[], int n,int p)
{
	int i;
	for(i=p-1;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		n--;
}
