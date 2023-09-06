#include<stdio.h>
int main()
{
	int i,j,c,n;
	printf("enter rows : ");
	scanf("%d",&n);

	
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if ((i==j) || (j==(n+1)-i))
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
