#include<stdio.h>
int main()
{
	int a,b,flag=0;
	printf("enter the number to check if its prime : ");
	scanf("%d",&a);
	b=2;
	while (b<=a/2)
	{
		if(a%b==0)
		{
			flag=1;
			break;
		}
		b+=1;
	}
	
	if (flag==0)
	printf("the number is prime %d",a);
	else
	printf("the number is not prime %d",a);
}
