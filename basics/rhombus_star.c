#include<stdio.h>
int main()
{
	int n,j,i;
	printf("enter the number of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
