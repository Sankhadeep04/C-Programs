#include<stdio.h>
int main()
{
	int a=1,b;
	
	printf("enter any number : ");
	scanf("%d",&b);
	
	while (b>=a)
	{
		printf("%d\n",b);
		--b;
	}
	
}
