#include<stdio.h>
int main()
{
	int a,b=1,flag;
	printf("enter the number to get its factors : ");
	scanf("%d",&a);
	
	while (b<=a)
	{
		if (a%b==0)
		{
			flag=0;
		}
		b++;
	}
	if(b%2==1)
	{	
		printf("the prime factor are \n",b);
	}
}
