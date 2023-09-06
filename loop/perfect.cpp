#include<stdio.h>
int main()
{
	int a,b=1,sum=0;
	printf("enter a number to check if its perfect number or not : ");
	scanf("%d",&a);
	
	while(b<a)
	{
		if(a%b==0);
		{
			sum+=b;
		}
		b++;
	}
	if(sum==a)
	{
		printf("%d is perfect number\n",a);
	}
	else 
	{
		printf("%d is not perfect number \n",a);
	}

}
