#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first side : ");
	scanf("%d",&a);
	printf("enter the second side : ");
	scanf("%d",&b);
	printf("enter the third side : ");
	scanf("%d",&c);
	if (a==b==c)
	{
		printf("its a equilateral triangle ");
	}
	else if (a==b || b==c || a==c)
	{
		printf("its a isosceles triangle ");
	}
	else 
	{
		printf("its a scalene triangle");
	}
}
