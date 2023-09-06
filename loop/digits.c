#include<stdio.h>
int main()
{
	int a,b=0;
	printf("enter the number to count the digits : ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		a=a/10;
		++b;
	}
	printf("there are %d digits in your number ",b);
}
