#include<stdio.h>
int main()
{
	int sum=0,num,r;
	printf("enter a number : ");
	scanf("%d",&num);
	while (num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("the sum of digit : ",sum);
}
