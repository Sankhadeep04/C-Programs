#include<stdio.h>
void maximum(int* , int*, int*, int*);
int main()
{
	int a,b,c,max;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	maximum(&a)
	printf("maximum amongst three is : %d",max);
}
void maximum(int *d,int *e, int *f, int *s)
{
	if((*d>*e)&&(*d>*f))
	{
		*s=*d;
	}
	else if((*e>*d)&&(*e>*f))
	{
		*s=*e;
	}
	else if((*f>*d)&&(*f>*e))
	{
		*s=*f;
	}
}
	
