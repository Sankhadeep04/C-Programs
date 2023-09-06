#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the number of rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=2;i<=n;i++)
	{
		 for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
		printf("\n");
	}
}
