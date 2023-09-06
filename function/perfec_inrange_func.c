#include<stdio.h>
int ArmstrongInRange(int,int);
int count(int);
int power(int,int);
int main()
{
	int n,m;
	printf("Enter the starting :");
	scanf("%d",&n);
	printf("Enter the ending :");
	scanf("%d",&m);

	ArmstrongInRange(n,m);
	
}
int count(int n)
{
	int c=0;
	while(n!=0)
	{
		n/=10;
		c++;
	}
	return c;	
}
int ArmstrongInRange(int n,int m)
{
    int num,sum,i,dgt,mul=1,c,rem,res=0;
    n=num;
	dgt=c;
	for(i=n;i<=m;i++)
	{
		while(n!=0)
		{
			rem=n%10;
			
			while(dgt!=0)
			{
				mul=mul*rem;
				dgt--;
			}
			res=res+mul;
			dgt=c;
			n=n/10;
			mul=1;
		}
		if(res==n)
		{
			printf("%d is an armstrong number",i);
		}	

	}
	
}
