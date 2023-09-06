#include<stdio.h>
int main()
{
	int num1,num2,a,b=1;
	printf("enter first number : ");
	scanf("%d",&num1);
	printf("enter second number : ");
	scanf("%d",&num2);
	while ((b<=num1)&&(b<=num2))
	{
		if (num1%b==0 && num2%b==0)
		{
			a=b;
		}
		b++;
	}
	printf("hcf of %d and %d is %d",num1,num2,a);
}
