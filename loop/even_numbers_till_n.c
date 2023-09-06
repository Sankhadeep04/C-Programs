#include<stdio.h>
int main()
{
	int a,b;
	printf("print even numbers till : ");
	scanf("%d",&b);
	a=1;
	while (a<=b)
	{
		if (a%2==0)
		{
			printf("even number are %d\n",a);
		}
		a++;
	}
}
