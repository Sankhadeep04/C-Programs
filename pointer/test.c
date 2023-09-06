#include<stdio.h>

int find_max(int*,int);

int main()
{
//	int arr[] = {1,2,3,4,5};
//	int i;
////	printf("%d %d %d",&arr[0],&arr,arr);
////	printf("%d %d",&arr[1],arr+1);
////	printf("%d %d",arr[1],1[arr]);
//	for(i=0;i<5;i++)
//	{
//		printf("%d\n",*(arr+i));
//	}

	int n,i,arr[10];
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	printf("The max = %d",find_max(arr,n));
}

int find_max(int arr[],int n)
{
	int max = arr[0],i;
	for (i=0;i<n;i++)
	{
		if (max<*(arr+i))
			max = arr[i];
	}
	return max;
}
