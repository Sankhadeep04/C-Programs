#include<stdio.h>
int main()
{
	int i,j,r,c,cr,cc;
	printf("enter the number of rows : ");
	scanf("%d",&r);
	printf("enter the number of columns ");
	scanf("%d",&c);
	cr=(r+1)/2;
	cc=(c+1)/2;
	for (i=1;i<=r;i++)
	{
		for (j=1;j<=c;j++)
		{
			if (cr==i || cc==j)
			{
				printf("0");
				
			}
			else if ((c%2==0 && cc+1==j) || (r%2==0 && cr+1==i))
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
