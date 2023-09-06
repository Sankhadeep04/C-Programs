#include<stdio.h>
int main()
{
	int a,b,c=1,p=1;
	printf("enter the base : ");
	scanf("%d",&a);
	printf("enter the power : ");
	scanf("%d",&b);
	while (c<=b)
	{
		p=a*p;
		p+=1;
	}
	printf("%d\n",c);
}
