#include<stdio.h>
int main()
{
	int a,b=1,num;
	printf("enter the digit : ");
	scanf("%d",&a);
	while (b<=10)
	{
		num=a*b;
		printf("%d*%d=%d",a,b,num);
	}
	b++;
	
}
