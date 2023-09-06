#include<stdio.h>
int main()
{
	int a=1,b,num;
	printf("the any digit : ");
	scanf("%d",&b);
	while (a<=10)
	{
		printf("%d * %d = %d\n",b,a,(b*a));
		a++;
	}
}
