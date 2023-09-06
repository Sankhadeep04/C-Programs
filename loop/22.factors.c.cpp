#include<stdio.h>
int main()
{
	int a,b=1;
	printf("enter the number to get its factors : ");
	scanf("%d",&a);
	
	while (b<a)
	{
		if (a%b==0)
		{
			printf("%d\n",b);
		}
		b++;
	}
}
