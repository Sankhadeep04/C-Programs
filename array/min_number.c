#include<stdio.h>
int main()
{
	int arr[50],n,m,i;
	printf("enter the total numbers : ");
	scanf("%d",&n);
	printf("enter numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		
	}
	m=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<m)
		{
			m=arr[i];
		}
	}
	printf("minimum number amongst them is : %d",m);
}
