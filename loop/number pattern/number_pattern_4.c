#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (i==n || i==1 || j==1 || j==n)
			{
				printf("1");
			}
			else 
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
