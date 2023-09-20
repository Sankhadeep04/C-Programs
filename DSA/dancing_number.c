#include<stdio.h>
int is_dancing(int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(is_dancing(n))
	{
		printf("Dancing number");
	}
	else
	{
		printf("Not a Dancing number");
	}
}
int is_dancing(int n)
{
	int a,b,flag=0;
	if(n>=0 && n<=10)
	{
		flag=0;
	}
	else
	{
		while(n>10)
		{
			a=n%10;
			n/=10;
			b=n%10;
			if(a-b!=1&&a-b!=-1)
			{
				flag=1;
				break;
			}
		}
		return flag==0;
	}
}
