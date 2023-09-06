#include<stdio.h>

void swap(int*,int*);

int main()
{
	int a,b;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
