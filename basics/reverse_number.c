#include<stdio.h>
int main()
{
	int sum=0,n,d;
	printf("enter a number : ");
	scanf("%d",& n);
	while (n>0)
	{
		d=n%10;
		sum=sum*10+d;
		n/=10;
	}
	printf("%d",sum);

	
}
