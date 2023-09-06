#include<stdio.h>
void sum(int*,int*,int*,int *);
int main()
{
	int a,b,c,total;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	sum(&a,&b,&c,&total);
	printf("sum of a,b & c is :%d",total);
//	total = sum(&a,&b,&c);
//	printf("sum of a,b & c is :%d",total);
	
}
void sum(int *d,int *e, int *f, int *s)
{
	*s = *d + *e + *f;
}
