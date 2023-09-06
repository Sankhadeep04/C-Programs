#include<stdio.h>
int main()
{
	int i,j,c,r;
	printf("enter the columns : ");
	scanf("%d",&c);
	printf("enter the rows : ");
	scanf("%d",&r);
	
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if ((i==1 || i==r) && (j==1 || j==c))
			{
				printf("0");
			}
			else if (i==1 || i==r || j==1 || j==c)
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
