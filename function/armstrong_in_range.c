#include<stdio.h>
int ArmstrongInRange(int);
int count(int);
int power(int,int);
int main()
{
	int n,m,i;
	printf("Enter the starting and ending point:");
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(ArmstrongInRange(i))
		{
			printf("%d\n",i);
		}
	}
}
int count(int n)
{
	int c=0;
	while(n>0)
	{
		n/=10;
		c++;
	}
	return c;
}
int power(int x,int y)
{
	int i,mul=1;
	for(i=1;i<=y;i++)
	{
		mul*=x;
	}
	return mul;
}
int ArmstrongInRange(int n)
{
	int d,sum=0,temp;
	d=count(n);
	temp=n;
	while(n>0)
	{
		sum+=power(n%10,d);
		n/=10;
	}
	return temp==sum;
}
