#include<stdio.h>
int lcm(int ,int);
int main()
{
	int num,num1,i;
	
	printf("enter the first number : ");
	scanf("%d",&num);
	printf("Enter the second number : ");
	scanf("%d",&num1);
	
	printf("LCM = %d", lcm(num,num1));
}
int lcm(int a,int b)
{
	static int i=0;
	i=i+b;
	if(i%a==0 && i%b == 0)
	{
		return i;
	}
	else
	{
		return lcm(a,b);	
	}
	
}
