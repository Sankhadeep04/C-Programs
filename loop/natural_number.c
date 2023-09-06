#include<stdio.h>
int main()
{
	int a=1,b;
	
	printf("enter any number : ");
	scanf("%d",&b);
	
	while (a<=b)
	{
		printf("%d",b);
		++b;
	}
	return 0;
}
