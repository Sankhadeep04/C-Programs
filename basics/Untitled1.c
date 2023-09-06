#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the valude of b : ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;	
	printf("value of a is :%d\n",a);
	printf("value of b is :%d\n",b);
}

